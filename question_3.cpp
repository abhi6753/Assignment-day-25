/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class Factorial
{
  int n,fact;
  public:
  void setN(int x)
  {
     n=x;
  }
  int getN()
  {
    return n;
  }
  int getFactorial()
  {
    return fact;
  }
  void calculateFactorial();
};
void Factorial::calculateFactorial()
  {
    if(n<=1)
    {
      fact =1;
      return;
    }
    else
    {
      fact =1;
      for(int i=2;i<=n;i++)
      {
        fact = fact*i;
      }
    }
  }
int main()
{
    Factorial f1;
    int x;
    cout<<"Enter number to find its factorial:"<<endl;
    cin>>x;
    f1.setN(x);
    f1.calculateFactorial();
    cout<<"Factorial of "<<f1.getN()<<" is "<<f1.getFactorial()<<endl;
    cin.get();
    return 0;
}