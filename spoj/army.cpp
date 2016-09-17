#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int ng,nm,t,i;
cin>>t;
while(t--)
{
cin>>ng>>nm;
int nga[ng],nma[nm];
for(i=0;i<ng;i++)
{
cin>>nga[i];
}
for(i=0;i<nm;i++)
{
cin>>nma[i];
}
sort(nga,nga+ng);
sort(nma,nma+nm);
if(nga[ng-1]>=nma[nm-1])
{
cout<<"Godzilla"<<endl;
}
else
cout<<"MechaGodzilla"<<endl;
}
}
