#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,a;
while(true)
{
int s=0,c=0;
cin>>n;
if(n==-1)
{
break;
}
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
s=s+arr[i];
}
if(s%n==0)
{
a=s/n;
sort(arr,arr+n);
for(int j=n-1;j>=0;j--)
{
while(arr[j]>a)
{
arr[j]--;
c=c+1;
}
}
cout<<c<<endl;
}
else
{
cout<<"-1"<<endl;
}
}
return 0;
}
