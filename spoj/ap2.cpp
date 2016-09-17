#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int s,a3,an3,a,n,d;
int t;
cin>>t;
while(t--)
{
cin>>a3>>an3>>s;
n=(2*s)/(a3+an3);
d=(an3-a3)/(n-5);
a=a3-(2*d);
cout<<n<<"\n";
for(long i=0;i<n;i++)
{
cout<<(a+i*d)<<" ";
}
cout<<endl;

}

}
