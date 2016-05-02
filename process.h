#ifndef PROCESS_H
#define PROCESS_H
#include <QList>
#include <QString>

class Process
{
private:
QList <int> size;
QList <QString> name;
public:
    Process();
    void setSize(int x);
    int getSize();
    void setProcess(QString x);
    QString getprocess();


};

#endif // PROCESS_H
