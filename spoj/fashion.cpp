#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<stdio.h>
using namespace std;
int main()
{
int t,n,s;
cin>>t;
while(t--)
{
s=0;
cin>>n;
int first[n],second[n];
for(int i=0;i<n;i++)
{
cin>>first[i];
}
for(int i=0;i<n;i++)
{
cin>>second[i];
}
sort(first,first+n);
sort(second,second+n);
for(int i=0;i<n;i++)
{
s=s+first[i]*second[i];
}
cout<<s<<endl;
}
}
