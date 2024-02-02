#include "../headers/Ellipse.h"
#include <cmath>
using namespace Shape;

Ellipse::Ellipse(double a, double b)
{
    this->mMajorAxis = a;
    this->mMinorAxis = b;
}

double Ellipse::area()
{
    return M_PI * mMajorAxis * mMinorAxis;
}

double Ellipse::perimeter()
{
    double perimetereOfEllipse = (mMajorAxis * mMajorAxis) + (mMinorAxis * mMinorAxis);
    perimetereOfEllipse = perimetereOfEllipse / 2;
    perimetereOfEllipse = 2 * M_PI * sqrt(perimetereOfEllipse);
    return perimetereOfEllipse;
}

Ellipse::~Ellipse()
{
}
