/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number.*/
#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
      void set(int x,int y)
      {
        real = x;
        imag = y;
      }
      void display()
      {
        cout<<real<<" + "<<imag<<"i"<<endl;
      }
};
int main()
{
    Complex b;
    int x,y;
    cout<<"Enter real part of complex number:"<<endl;
    cin>>x;
    cout<<"Enter iamginary part of complex number:"<<endl;
    cin>>y;
    b.set(x,y);
    b.display();
    cin.get();
    return 0;
}