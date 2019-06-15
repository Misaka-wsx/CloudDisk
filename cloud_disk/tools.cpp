#include "tools.h"

QByteArray getFileMd5(QString filePath)
{
    QFile localFile(filePath);

    if (!localFile.open(QFile::ReadOnly))
    {
        qDebug() << "file open error.";
        return 0;
    }

    QCryptographicHash ch(QCryptographicHash::Md5);

    quint64 totalBytes = 0;
    quint64 bytesWritten = 0;
    quint64 bytesToWrite = 0;
    quint64 loadSize = 1024 * 4;
    QByteArray buf;

    totalBytes = localFile.size();
    bytesToWrite = totalBytes;

    while (1)
    {
        if (bytesToWrite > 0)
        {
            buf = localFile.read(qMin(bytesToWrite, loadSize));
            ch.addData(buf);
            bytesWritten += buf.length();
            bytesToWrite -= buf.length();
            buf.resize(0);
        }
        else
        {
            break;
        }

        if (bytesWritten == totalBytes)
        {
            break;
        }
    }

    localFile.close();
    QByteArray md5 = ch.result();
    return md5;
}


// 获取文件图标
HICON fileIcon(std::string extention)
{
    HICON icon = NULL;
    if (extention.length() > 0)
    {
        LPCSTR name = extention.c_str();

        SHFILEINFOA info;
        if (SHGetFileInfoA(name,
            FILE_ATTRIBUTE_NORMAL,
            &info,
            sizeof(info),
            SHGFI_SYSICONINDEX | SHGFI_ICON | SHGFI_USEFILEATTRIBUTES))
        {
            icon = info.hIcon;
        }
    }

    return icon;
}



