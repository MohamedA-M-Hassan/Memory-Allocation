#ifndef PROCESS_H
#define PROCESS_H
#include <QString>

class Process
{
private:
int size;
int address=-1; // -1 : not allocated process
QString name;

public:
    Process();
    void setSize(int x);
    int getSize();
    void setName(QString x);
    QString getName();


};

#endif // PROCESS_H
