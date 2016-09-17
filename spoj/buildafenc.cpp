#include<iostream>
#include<iomanip>
#define pi 3.14159265358979323846
using namespace std;
int main()
{
double  f;
while(6)
{
cin>>f;
if(f==0)
{
break;
}
else
{
double x=f/pi;
double a=pi*x*x/2.0;
cout<<fixed<<setprecision(2)<<a<<endl;
}
}
}

