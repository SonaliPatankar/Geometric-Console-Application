#include "../headers/Circle.h"
//#include "Circle.h"
#include<cmath>
using namespace Shape;

Circle::Circle(double radius1){
    this->radius = radius1;
}

double Circle:: area(){
    return M_PI*radius;
}
double Circle::perimeter()
{
    return 2*M_PI*radius;
}

Circle::~Circle(){
    }
     
