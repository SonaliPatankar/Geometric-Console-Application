namespace Shape
{
class Line{
    private:
    float x1cordinate, y1cordinate,x2cordinate,y2cordinate;
    public:
    Line(float x1cordinate, float y1cordinate,float x2cordinate, float y2cordinate);

    float lengthOfLine();
    
    ~Line();
};
}