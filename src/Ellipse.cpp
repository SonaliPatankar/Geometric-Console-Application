#include "../headers/Ellipse.h"
#include <cmath>
using namespace Shape;

Ellipse::Ellipse(double a,double b){
 this->majorAxis = a;
 this->minorAxis = b;   
}

double Ellipse::area()
{
    return M_PI*majorAxis*minorAxis;
}

double Ellipse::perimeter()
{
    double perimetereOfEllipse = (majorAxis*majorAxis)+(minorAxis*minorAxis);
    perimetereOfEllipse = perimetereOfEllipse/2;
    perimetereOfEllipse = 2 * M_PI*sqrt(perimetereOfEllipse);
    return perimetereOfEllipse;
}

Ellipse::~Ellipse(){
    }
     
