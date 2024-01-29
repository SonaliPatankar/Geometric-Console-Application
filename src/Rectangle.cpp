#include "../headers/Rectangle.h"
using namespace Shape;

Rectangle::Rectangle(double l, double b){
    this->length = l;
    this->breadth = b;
}

double Rectangle::area(){
    return length*breadth;
}
double Rectangle::perimeter()
{
    return 2*length*breadth;
}

Rectangle::~Rectangle(){
    }
     
