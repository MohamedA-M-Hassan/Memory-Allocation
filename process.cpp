#include "process.h"

Process::Process(){}


void Process::setSize(int x)
    {
        size=x;
    }
int Process::getSize()
    {
        return size;
    }
void Process::setName(QString x)
    {
        name=x;
    }

QString Process::getName()
    {
        return name;
    }
void setAddress(int x)
{
    address=x;
}

int getAddress()
{
    return address;
}
