namespace Shape
{
class Ellipse{
    public:
    Ellipse(double majorAxis,double minorAxis);
    ~Ellipse();
    //return area of circle in double
    double area();
    //return perimeter of Ellipse
    double perimeter();
    private:
    double mMajorAxis,mMinorAxis;
};
}