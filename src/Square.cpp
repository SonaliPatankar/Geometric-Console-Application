#include "../headers/Square.h"
using namespace Shape;

Square::Square(double l)
{
    mLength = l;
}

double Square::area()
{
    return mLength * mLength;
}
double Square::perimeter()
{
    return 4 * mLength;
}

Square::~Square()
{
}
