#include "logfile.h"

logFile::logFile(QObject *parent) :
    QObject(parent)
{
}

void logFile::displayLogFile()
{
    qDebug()<<"Inside displayLogFile";
}

void logFile::setPath()
{
    qDebug()<<"Inside setPath";
}
