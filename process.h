#ifndef PROCESS_H
#define PROCESS_H
#include <QList>
#include <QString>

class Process
{
private:
int size;
QString name;
public:
    Process();
    void setSize(int x);
    int getSize();
    void setName(QString x);
    QString getName();


};

#endif // PROCESS_H
