#include "cloud_disk.h"

cloud_disk::cloud_disk(QWidget *parent)
    : QMainWindow (parent),
      ui(new Ui::cloud_disk)
{
    ui->setupUi(this);
    this->netManger=new QNetworkAccessManager;
    connect(ui->listWidget,&QListWidget::itemClicked,[=](QListWidgetItem *item){
        qDebug()<<item->text()<<endl;
        if(item->text()=="上传")
        {
            this->uploadButton();
        }
    });
    //显示模式
    ui->listWidget->setViewMode(QListWidget::IconMode);
    //图片大小
    ui->listWidget->setIconSize(QSize(100,100));
    //单元项间距
    ui->listWidget->setSpacing(10);
    //设置不能移动
    ui->listWidget->setMovement(QListWidget::Static);
    //自适应
    ui->listWidget->setResizeMode(QListWidget::Adjust);
    //去除边框
    this->setWindowFlags(Qt::FramelessWindowHint);

}

cloud_disk::~cloud_disk()
{
    delete ui;
}

void cloud_disk::set_config(Config *temp_config)
{
    this->config=temp_config;
}

void cloud_disk::checkFileMd5(QString filename, QString fileMd5String)
{
    //int ret=0;
    QNetworkRequest request(QUrl(QString("%1%2%3").arg("http://").arg("127.0.0.1").arg("/md5")));
    //设置传输方式 post
    request.setRawHeader("Content-Tyoe","application/json");
    request.setRawHeader("token",this->config->token);
    //json
    QJsonObject json;
    QFileInfo fi=QFileInfo(filename);
    json.insert("filename",fi.fileName());
    json.insert("md5",fileMd5String);
    //json document
    QJsonDocument doc;
    doc.setObject(json);
    auto dataJson=doc.toJson();
    //request
    QNetworkReply* rep=this->netManger->post(request,dataJson);
    //bind finished signal
    connect(rep,&QNetworkReply::finished,[=](){
        //请求失败
        if(rep->error()!=QNetworkReply::NoError){
            qDebug()<<"秒传对比MD5请求错误"<<endl;
            rep->deleteLater();
            return;
        }
        //成功
        QByteArray byteArry=rep->readAll();
        //判断字符串转化qjsondocument 是否出现错误
        QJsonParseError jsonError;
        QJsonDocument json=QJsonDocument::fromJson(byteArry,&jsonError);
        //成功
        if(jsonError.error==QJsonParseError::NoError)
        {
           QJsonObject obj=json.object();
           qint64 status=obj.value("status").toInt();
           QString msg=obj.value("msg").toString();
           if(1==status)
           {
               QMessageBox::information(this,"秒传成功","秒传成功");
               this->onMyFilesClicked();
           }else if (2==status) {
                QMessageBox::information(this,"文件已存在","该文件已存在，不能上传重复文件");
           } else
           {
               qDebug()<<"该文件无法进行秒传stasus:"<<status<<endl;
               this->uploadFile(filename);
           }
        }else{
            QString resultString=byteArry;
            qDebug()<<"返回json格式错误"<<resultString;
        }
        rep->deleteLater();
    });

}

void cloud_disk::uploadFile(QString filename)
{

}

void cloud_disk::flushTable(QJsonDocument json)
{
    //清空之前文件列表
    ui->listWidget->clear();
    //添加上传按钮
    this->addUploadButton();
    //数组长度
    int arrayLength=0;
    //二维数组长度
    int arrayValueLength=0;
    if(json.isArray()){
        qDebug()<<"是一个数组"<<endl;
        QJsonArray array =json.array();
        arrayLength=array.size();
        for(int i=0;i<arrayLength;++i)
        {
            //取出二维数组中json数组
            QJsonObject arrayValue=array.at(i).toObject();
            //从json对象中取出fileId
            QJsonValue id = arrayValue.value("id");
            QJsonValue uid = arrayValue.value("uid");
            QJsonValue file_id = arrayValue.value("file_id");
            QJsonValue filename = arrayValue.value("filename");
            QJsonValue createtime = arrayValue.value("createtime");
            QJsonValue shared_status = arrayValue.value("shared_status");
            QJsonValue pv = arrayValue.value("pv");
            QJsonValue md5 = arrayValue.value("md5");
            QJsonValue size = arrayValue.value("size");
            QJsonValue type = arrayValue.value("type");
            QJsonValue count = arrayValue.value("count");

            //定义qlistwidgetTtem对象
            QListWidgetItem *imageItem=new QListWidgetItem;
            //从扩展名获取windows图标
            HICON thisIcon=fileIcon(QString(".%1").arg(type.toString()).toStdString());
            //将获取的windows图标句柄转换成qt能用的qpixmap
            QPixmap iconImage=QtWin::fromHICON(thisIcon);

            imageItem->setIcon(QIcon(iconImage));
            imageItem->setText(filename.toString());
            //重新设置单元项图片宽度和高度
            imageItem->setSizeHint(QSize(100,100));
            //将单元项添加到qlistwidget中
            ui->listWidget->addItem(imageItem);
        }
    }else
    {
        qDebug()<<"不是一个数组"<<endl;
    }
}

void cloud_disk::addUploadButton()
{
    //添加上传按钮
    QListWidgetItem * uploadButton=new QListWidgetItem;
    uploadButton->setIcon(QIcon(":/image/Resources/image/images/upload.png"));
    uploadButton->setText(tr("上传"));
    ui->listWidget->addItem((uploadButton));
}

void cloud_disk::onMyFilesClicked()
{
    QNetworkRequest request(QUrl(QString("%1%2").arg(this->config->url).arg("/myfiles")));
    request.setRawHeader("token",this->config->token);
    QByteArray postData;
    postData.append("{\"action\":\"get_list\"}\n");
    QNetworkReply* rep=this->netManger->post(request,postData);
    connect(rep,&QNetworkReply::finished,[=](){
        if(rep->error()!=QNetworkReply::NoError)
        {
            qDebug()<<"发送请求错误"<<endl;
            rep->deleteLater();
            return ;
        }
        QByteArray byteArray=rep->readAll();
        QString result=byteArray;

        QJsonParseError jsonError;
        QJsonDocument json=QJsonDocument::fromJson(byteArray,&jsonError);
        //正常
        if(jsonError.error==QJsonParseError::NoError)
        {
            qDebug().noquote()<<result;
            //刷新文件列表
            this->flushTable(json);
        }else
        {
            qDebug()<<"json解析错误"<<endl;
            rep->deleteLater();
        }
    });
    qDebug()<<"获取完成"<<endl;
}

void cloud_disk::uploadButton()
{
    //int ret=0;
    QString filename=QFileDialog::getOpenFileName(this,"选择您要上传的文件",QDir::currentPath(),"All files(*.*)");
    if(!filename.isNull()){
        //对选择文件计算MD5
        QByteArray fileMd5=getFileMd5(filename);
        QString fileMd5String=fileMd5.toHex();
        qDebug()<<"filename"<<filename<<endl<<"file md5"<<fileMd5String<<endl;
        //发送http请求，判断是否可以秒传
        this->checkFileMd5(filename,fileMd5String);
    }
}
void cloud_disk::on_switch_user_clicked()
{
   login *loginUser=new login;
   loginUser->show();
   this->close();
}











