#include "../headers/Circle.h"
#include<cmath>
using namespace Shape;

Circle::Circle(double radius1){
    this->mRadius = radius1;
}

double Circle:: area(){
    return M_PI*mRadius;
}
double Circle::perimeter()
{
    return 2*M_PI*mRadius;
}

Circle::~Circle(){
    }
     
