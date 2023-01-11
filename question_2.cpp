/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
     void setTime(int h,int m,int s)
     {
        hr = h;
        min = m;
        sec = s;
     }
     void displayTime()
     {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
     }
};
int main()
{
    Time t;
    int h,m,s;
    cout<<"Enter Time in this format HH:MM:SS"<<endl;
    cin>>h>>m>>s;
    t.setTime(h,m,s);
    t.displayTime();
    cin.get();
    return 0;
}