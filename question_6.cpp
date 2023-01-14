/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
    int s,area;
    static int count;
    public:
    void setS(int x)
    {
        s = x;
    }
    int getS()
    {
        return s;
    }
    int getArea()
    {
        return area;
    }
    void calculateArea()
    {
        area = s*s;
    }
    static int getCount()
    {
        count++;
        return count;
    }
};

int main()
{
    Square s;
    int x;
    cout<<"Enter number to get its square :"<<endl;
    cin>>x;
    s.setS(x);
    s.calculateArea();
    cout<<"Square of "<<s.getS()<<" is "<<s.getArea()<<endl;
    cout<<"Count() invoked "<<Square::getCount<<" times"<<endl;
    cin.get();
    return 0;
}
