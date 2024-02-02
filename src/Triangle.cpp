#include "../headers/Triangle.h"
#include <cmath>
using namespace Shape;

Triangle::Triangle(double s1, double s2, double s3)
{
    mSide1 = s1;
    mSide2 = s2;
    mSide3 = s3;
}

double Triangle::area()
{
    double s = perimeter();
    double areaOfTriangle = s * (s - mSide1) * (s - mSide2) * (s - mSide2);
    areaOfTriangle = sqrt(areaOfTriangle);
    return areaOfTriangle;
}

double Triangle::perimeter()
{
    return mSide1 + mSide2 + mSide3;
}

Triangle::~Triangle()
{
}
