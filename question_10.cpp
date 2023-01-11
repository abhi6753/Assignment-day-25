/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
using namespace std;
class Area
{
    float side,length,breadth,radius,base,height,Pbase,Pheight;
    float squareArea,rectangleArea,circleArea,triangleArea,parallelogramArea;
    public:
    void setSide(float s)
    {
        side  = s;
    }
    float getSide()
    {
        return side ;
    }
    void setLength(float l)
    {
        length = l;
    }
    float getLength()
    {
        return length;
    }
    void setBreadth(float b)
    {
        breadth = b;
    }
    float getBreadth()
    {
        return breadth;
    }
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
    void setBase(float b)
    {
        base = b;
    }
    float getBase()
    {
        return base;
    }
    void setHeight(float h)
    {
        height = h;
    }
    float getHeight()
    {
        return height;
    }
    void setParallelogramBase(float b)
    {
        Pbase = b;
    }
    float getParallelogramBaset()
    {
        return Pbase;
    }
    void setParallelogramHeight(float h)
    {
        Pheight = h;
    }
    float getParallelogramHeight()
    {
        return Pheight;
    }
    float getSquareArea()
    {
        return squareArea;
    }
    float getRectangleArea()
    {
        return rectangleArea;
    }
    float getCircleArea()
    {
        return circleArea;
    }
    float getTriangleArea()
    {
        return triangleArea;
    }
    float getParallelogramArea()
    {
        return parallelogramArea;
    }
    void CalculateSqaureArea()
    {
        squareArea= side*side;
    }
    void CalculateRectangleArea()
    {
        rectangleArea= length*breadth;
    }
    void CalculateCircleArea()
    {
        circleArea= 3.14f*radius*radius;
    }
    void CalculateTriangleArea()
    {
        triangleArea= 0.5f*base*height;
    }
    void CalculateParallelogramArea()
    {
        parallelogramArea= 0.5f*base*height;
    }
};
int main()
{
    Area c;
    short ch;
    float a,b;
 ch:cout<<"Enter your choice:"<<endl;
    cout<<"1.Find Area of Sqaure"<<endl;
    cout<<"2.Find Area of Rectangle"<<endl;
    cout<<"3.Find Area of Circle"<<endl;
    cout<<"4.Find Area of Triangle"<<endl;
    cout<<"5.Find Area of Parallelogram"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
         cout<<"Enter side of square: "<<endl;
         cin>>a;
         c.setSide(a);
         c.CalculateSqaureArea();
         cout<<"Area of square = "<<c.getSquareArea()<<endl;
         break;
        case 2:
         cout<<"Enter length and breadth: "<<endl;
         cin>>a,b;
         c.setLength(a);
         c.setLength(b);
         c.CalculateRectangleArea();
         cout<<"Area of rectangle = "<<c.getRectangleArea()<<endl;
        break;
        case 3:
         cout<<"Enter radius of a circle:"<<endl;
         cin>>a;
         c.setRadius(a);
         c.CalculateCircleArea();
         cout<<"Area of circle = "<<c.getCircleArea()<<endl;
         break;
        case 4:     
         cout<<"Enter base and height of triangle: "<<endl;
         cin>>a>>b;
         c.setBase(a);
         c.setHeight(b);
         c.CalculateTriangleArea();
         cout<<"Area of triangle = "<<c.getTriangleArea()<<endl;
        break;
        case 5:
         cout<<"Enter base and height of Parallelogram: "<<endl;
         cin>>a>>b;
         c.setParallelogramBase(a);
         c.setParallelogramHeight(b);
         cout<<"Area of Parallelogram = "<<c.getParallelogramArea()<<endl;
        break;
        default:
        cout<<"Please enter correct choice"<<endl;
        goto ch;
    }
    cin.get();
    return 0;
}