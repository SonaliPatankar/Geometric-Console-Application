#include "../headers/Rectangle.h"
using namespace Shape;

Rectangle::Rectangle(double l, double b)
{
    this->mLength = l;
    this->mBreadth = b;
}

double Rectangle::area()
{
    return mLength * mBreadth;
}
double Rectangle::perimeter()
{
    return 2 * mLength * mBreadth;
}

Rectangle::~Rectangle()
{
}
