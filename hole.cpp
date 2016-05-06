#include "hole.h"

hole::hole()
{
  starting_address="";
  size=0;
}

void hole::set_startingAddress(string address)
{
    starting_address=address;
}

void hole::set_size(int s)
{
    size=s;
}

int hole::get_startingAddress()
{
    return atoi(starting_address.c_str());
}

int hole::get_size()
{
    return size;
}
