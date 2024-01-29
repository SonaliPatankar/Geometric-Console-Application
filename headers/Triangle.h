namespace Shape
{
class Triangle{
    private:double side1, side2,side3;
    public:
    Triangle(double side1, double side2, double side3);

    double area();
    double perimeter();
    ~Triangle();
};
}