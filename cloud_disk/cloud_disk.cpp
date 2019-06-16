#include "cloud_disk.h"

cloud_disk::cloud_disk(QWidget *parent)
    : QMainWindow (parent),
      ui(new Ui::cloud_disk)
{
    ui->setupUi(this);
    //this->netManger=new QNetworkAccessManager;
    //connect(ui->listWidget,&QListWidget::itemClicked(),[=](QListWidgetItem *item){
      //  qDebug()<<item->text()<<endl;
   // });
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

}

void cloud_disk::uploadFile(QString filename)
{

}

void cloud_disk::flushTable(QJsonDocument json)
{

}

void cloud_disk::addUploadButton()
{
    //添加上传按钮
    QListWidgetItem * uploadButton=new QListWidgetItem;
    uploadButton->setIcon(QIcon(":/image/Resources/image/images/upload.png"));
    uploadButton->setText(tr("上传"));
    ui->listWidget->addItem((uploadButton));
}
