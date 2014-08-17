#include <QCoreApplication>
#include "logfile.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // qDebug()<<"welcome to git Data Structure  project";

    logFile *tempLogFile = new logFile();
    if(tempLogFile)
    {
        tempLogFile->displayLogFile();
    }

    return a.exec();
}
