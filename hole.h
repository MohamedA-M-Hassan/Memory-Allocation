#ifndef HOLES_H
#define HOLES_H
#include <QString>
using namespace std;
class hole
{
private:
   string starting_address;
   int size;
public:
   hole();
   void set_startingAddress(string address);
   void set_size(int s);
   int get_startingAddress();
   int get_size();
};

#endif // HOLES_H
