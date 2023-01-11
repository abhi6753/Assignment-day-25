/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{
   int num,reverse;
   public:
   void setNum(int x)
   {
      num = x;
   }
   int getNum()
   {
      return num;
   }
   int getReverse()
   {
      return reverse;
   }
   void calculateReverse()
   {
      int x=num;
      int rem,rev=0;
      while(x)
      {
        rem = x%10;
        rev = rev*10+rem;
        x/=10;
      }
      reverse=rev;
   }
};
int main()
{
    ReverseNumber n;
    int x;
    cout<<"Enter number to get its reverse:\n";
    cin>>x;
    n.setNum(x);
    n.calculateReverse();
    cout<<"Reverse number of "<<n.getNum()<<" = "<<n.getReverse()<<endl;
    cin.get();
    return 0;
}