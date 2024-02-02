#include "../headers/Line.h"
#include <cmath>
using namespace Shape;

Line::Line(float x1, float y1, float x2, float y2)
{
    this->mX1Coordinate = x1;
    this->mY1Coordinate = y1;
    this->mX2Coordinate = x2;
    this->mY2Coordinate = y2;
}

float Line::lengthOfLine()
{
    float xValue = (mX2Coordinate - mX1Coordinate) * (mX2Coordinate - mX1Coordinate);
    float yValue = (mY2Coordinate - mY1Coordinate) * (mY2Coordinate - mY1Coordinate);
    float len = sqrtf(xValue + yValue);
    return len;
}

Line::~Line()
{
}
