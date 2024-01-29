#include "../headers/Triangle.h"
#include<cmath>
using namespace Shape;

Triangle::Triangle(double s1, double s2, double s3){
    this->side1 =s1;
    this->side2 = s2;
    this->side3 = s3;
}

double Triangle::area()
{
    double s = perimeter();
    double areaOfTriangle = s*(s-side1)*(s-side2)*(s-side3);
    areaOfTriangle = sqrt(areaOfTriangle);
    return areaOfTriangle;
}

double Triangle::perimeter()
{
    return side1+side2+side3;
}

Triangle::~Triangle(){
    }
     
