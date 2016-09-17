#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long t,x;
long long n;
cin>>t;
while(t--)
{
cin>>n;
if(n%2==0)
{
n=n/2;
cout<<(n*(n+1)*(4*n+1))/2<<endl;
}
else
{
n=n/2;
cout<<((n+1)*(4*n*n+7*n+2))/2<<endl;
}
}
}
