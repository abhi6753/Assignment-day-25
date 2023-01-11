/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth,area;
    public:
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
       return length;
    }
    int getLength()
    {
       return breadth;
    }
    int getArea()
    {
        return area;
    }
    void calculateArea()
    {
        area = length*breadth;
    }
};
int main()
{
    Rectangle r;
    int l,b;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    r.setLength(l);
    r.setBreadth(b);
    r.calculateArea();
    cout<<"Area = "<<r.getArea()<<endl;
    cin.get();
    return 0;
}