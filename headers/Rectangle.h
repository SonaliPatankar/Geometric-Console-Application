namespace Shape
{
class Rectangle{
    private:double length, breadth;
    public:
    Rectangle(double length, double breadth);

    double area();
    double perimeter();
    ~Rectangle();
};
}