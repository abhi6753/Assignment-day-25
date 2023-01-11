/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
using namespace std;
class LargestNumber
{
    int a,b,c,largest;
    public:
    void setABC(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }  
    int getA()
    {
       return a;
    } 
    int getB()
    {
       return b;
    }
    int getC()
    {
       return c;
    }
    void calculateLargest()
    {
       largest = a>b?(a>c?a:c):(b>c?b:c);
    }
    int getLargest()
    {
        return largest;
    }
};
int main()
{
    LargestNumber l;
    int a,b,c,largest;
    cout<<"Enter 3 number to get largest b/w them :"<<endl;
    cin>>a>>b>>c; 
    l.setABC(a,b,c);
    l.calculateLargest();
    cout<<"Largest number between "<<l.getA()<<", "<<l.getB()<<" and "<<l.getC()\
    <<" is "<<l.getLargest()<<endl;
    cin.get();
    return 0;
}