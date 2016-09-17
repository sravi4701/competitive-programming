#include<iostream>
using namespace std;
void simpleinterest(double,long,long,long);
void compoundinterest(double,long,long,long);
int main()
{
int t;
int initialamount,noy,noo,soc,jpy;
double air;
cin>>t;
while(t--)
{
cin>>initialamount;
cin>>noy;
cin>>noo;
for(int i=0;i<noo;i++)
{
cin>>soc>>air>>jpy;
if(soc==0)
{
simpleinterest(air,noy,initialamount,jpy);
}
else
{
compoundinterest(air,noy,initialamount,jpy);
}
}
}
}
void simpleinterest(double air,long n,long a,long jpy)
{
long long b,c;
for(int i=0;i<n;i++)
{
b=a*air;
c=a+b-jpy;
a=c;
}
cout<<c;
}
void compoundinterest(double air,long n,long a,long jpy)
{
long long b,c,cf=0;
for(int i=0;i<n;i++)
{
b=a*air;
c=a-jpy;
a=c;
cf=cf+b;
}
cout<<cf+a;
}
