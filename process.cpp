#include "process.h"

Process::Process(){}


void Process::setSize(int x)
    {
        size.push_back(x);
    }
int Process::getSize()
    {
        int x =  size.front();
        size.pop_front();
        return x;
    }
void Process::setProcess(QString x)
    {
        name.push_back(x);
    }
QString Process::getprocess()
    {
    QString x =  name.front();
    name.pop_front();
    return x;
    }
