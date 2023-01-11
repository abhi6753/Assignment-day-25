/*9. Define a class Circle and define an instance member function to find the area of the
circle.*/
#include<iostream>
using namespace std;
class Circle
{
    float radius,area;
    public:
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
    float getAreaCircle()
    {
        return area;
    }
    void CalculateArea()
    {
        area= 3.14f*radius*radius;
    }
};
int main()
{
    Circle c;
    float r;
    cout<<"Enter radius of a circle: "<<endl;
    cin>>r;
    c.setRadius(r);
    c.CalculateArea();
    cout<<"Area of circle = "<<c.getAreaCircle();
    cin.get();
    return 0;
}
