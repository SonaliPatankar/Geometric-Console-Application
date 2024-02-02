namespace Shape
{
class Square{
    public:
    Square(double length);
    ~Square();
    //return area of Square
    double area();
    //return perimeter of square
    double perimeter();
    private:
    double mLength;
};
}