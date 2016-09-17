#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
float x;
while(6)
{
cin>>n;
if(n==0)
{
break;
}
else
{
x=n*0.16;
cout<<setprecision(2)<<fixed<<x<<endl;
}
}
}

