#include<iostream>
using namespace std;
int main()
{
int arr[200];
int t;
int n,temp,index,i;
cin>>t;
while(t--)
{
arr[0]=1;
index=0;
cin>>n;
for(;n>=2;n--)
{
temp=0;
for(i=0;i<=index;i++)
{
temp=(arr[i]*n)+temp;
arr[i]=temp%10;
temp=temp/10;
}
while(temp>0)
{
index++;
arr[index]=temp%10;
temp=temp/10;
}
}
for(i=index;i>=0;i--)
{
cout<<arr[i];
}
cout<<endl;
}
}

