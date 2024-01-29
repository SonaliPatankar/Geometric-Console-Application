#include "../headers/Square.h"
using namespace Shape;

Square::Square(double l){
    this->length = l;
}

double Square::area(){
    return length*length;
}
double Square::perimeter()
{
    return 4*length;
}

Square::~Square(){
    }
     
