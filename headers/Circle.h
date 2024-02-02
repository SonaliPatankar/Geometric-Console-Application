namespace Shape
{
class Circle{
    public:
    Circle(double radius);
    ~Circle();
    //return area of circle in double
    double area();
    //return perimeter of line in float
    double perimeter();
    //return radius of circle
    double radius();
    private:
    double mRadius;
};
}