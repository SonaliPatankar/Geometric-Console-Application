namespace Shape
{
class Triangle{
    public:
    Triangle(double side1, double side2, double side3);
    ~Triangle();
    //return area of triangle
    double area();
    //return perimeter of triangle
    double perimeter();
    private:
    double mSide1;
    double mSide2;
    double mSide3;
};
}