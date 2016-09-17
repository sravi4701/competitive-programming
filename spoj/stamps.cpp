#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
int t,stamp,friends,i,s,c;
cin>>t;
for(int j=0;j<t;j++)
{
s=0;
c=0;
cin>>stamp>>friends;
int arr[friends];
for(i=0;i<friends;i++)
{
cin>>arr[i];
}
sort(arr,arr+friends);
for(i=friends-1;i>=0;i--)
{
s=s+arr[i];
c=c+1;
if(s>=stamp)
{
cout<<"Scenario #"<<j+1<<":\n"<<c<<"\n";
break;
}
}
if(s<stamp)
{
cout<<"Scenario #"<<j+1<<":\nimpossible\n"<<endl;
}
}
}

