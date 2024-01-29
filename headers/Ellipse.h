namespace Shape
{
class Ellipse{
    public:
    double majorAxis,minorAxis;
    Ellipse(double majorAxis,double minorAxis);

    double area();
    double perimeter();
    ~Ellipse();
};
}