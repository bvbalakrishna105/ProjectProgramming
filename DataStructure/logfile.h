#ifndef LOGFILE_H
#define LOGFILE_H

#include <QObject>
#include<QDebug>

class logFile : public QObject
{
    Q_OBJECT
public:
    explicit logFile(QObject *parent = 0);
    void displayLogFile();
    void setPath();

signals:

public slots:

};

#endif // LOGFILE_H
