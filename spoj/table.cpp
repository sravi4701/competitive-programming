#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
int n,k,s,c,sum;
cin>>n>>k>>s;
sum=0;
c=0;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
for(int i=n-1;i>=0;i--)
{
sum=sum+arr[i];
c=c+1;
if(sum>=k*s)
{
cout<<c<<endl;
break;
}
}
}


