#include <iostream>
using namespace std;
long addrev(long);
int main()
{
long n1,n2,t,p,q,r;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n1>>n2;
p=addrev(n1);
q=addrev(n2);
r=addrev(p+q);
cout<<r<<endl;
}
}
long addrev(long n)
{
long rev=0,r;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
return rev;
}
