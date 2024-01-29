#include "../headers/Line.h"
#include<cmath>
using namespace Shape;

Line::Line(float x1, float y1,float x2, float y2){
    this->x1cordinate = x1;
    this->y1cordinate = y1;
    this->x2cordinate = x2;
    this->y2cordinate = y2;
}

float Line::lengthOfLine(){
    float xValue = (x2cordinate-x1cordinate)*(x2cordinate-x1cordinate);
    float yValue = (y2cordinate-y1cordinate)*(y2cordinate-y1cordinate);
    float len = sqrtf(xValue + yValue);
    return len;
}


Line::~Line(){
    }
     
