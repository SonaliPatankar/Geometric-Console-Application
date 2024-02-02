namespace Shape
{
class Rectangle{
    
    public:
    Rectangle(double length, double breadth);
    ~Rectangle();
    //return area of rectangle
    double area();
    //return perimeter of rectangle
    double perimeter();
    private:
    double mLength, mBreadth;
};
}