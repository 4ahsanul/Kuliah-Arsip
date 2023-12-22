#include "point.h"

point::point(int a, int b):x(a), y(b)
{
    //ctor
}

point::point():x(0), y(0)
{

}

point::~point()
{
    //dtor
}

int point::getX() const
{
    return x;
}
