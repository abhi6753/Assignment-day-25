/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
    int s,area;
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
};
int count()
{
    static int count;
    count++;
    return count; 
}
int main()
{
    Square s;
    int x,total;
    cout<<"Enter number to get its square :"<<endl;
    cin>>x;
    s.setS(x);
    cout<<"Square of "<<s.getS()<<" is "<<s.getArea()<<endl;
    for(int i=0;i<5;i++)
    {
        total = count();
    }
    cout<<"Count() calls "<<total<<" times"<<endl;
    cin.get();
    return 0;
}