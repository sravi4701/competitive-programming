#include<iostream>
using namespace std;
int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
int c=0;
cin>>n;
while(n!=0)
{
c=c+n/5;
n=n/5;
}
cout<<c<<endl;
}
return 0;
}

