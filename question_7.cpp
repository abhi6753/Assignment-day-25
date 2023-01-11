/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Greatest
{
    int a,b,c,greatest;
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
    void calculateGreatest()
    {
       greatest = a>b?(a>c?a:c):(b>c?b:c);
    }
    int getGreatest()
    {
        return greatest;
    }
};
int main()
{
    Greatest l;
    int a,b,c,largest;
    cout<<"Enter 3 number to get largest b/w them :"<<endl;
    cin>>a>>b>>c; 
    l.setABC(a,b,c);
    l.calculateGreatest();
    cout<<"Largest number between "<<l.getA()<<", "<<l.getB()<<" and "<<l.getC()\
    <<" is "<<l.getGreatest()<<endl;
    cin.get();
    return 0;
}