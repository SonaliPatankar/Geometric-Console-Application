namespace Shape
{
class Line{
    public:
    Line(float x1cordinate, float y1cordinate,float x2cordinate, float y2cordinate);
    ~Line();
    //return length of line in float 
    float lengthOfLine();
    private:
    float mX1Coordinate, mY1Coordinate,mX2Coordinate,mY2Coordinate;
};
}