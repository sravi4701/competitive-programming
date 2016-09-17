#include<iostream>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while(t--)
{
cout<<"\n";
unsigned long long int s=0,i;
cin>>n;
unsigned long long int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
s=s+arr[i];
if(s>=n)
{
s=s%n;
}
}
if(s==0)
{
cout<<"YES\n";
}
else
cout<<"NO\n";
}
}

