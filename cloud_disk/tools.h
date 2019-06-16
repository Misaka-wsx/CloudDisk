#ifndef TOOLS_H
#define TOOLS_H

#include <QString>
#include <QByteArray>
#include <QCryptographicHash>
#include <QFile>
#include <QDebug>
#include "login.h"


QByteArray getFileMd5(QString filePath);

HICON fileIcon(std::string extention);

#endif // TOOLS_H
