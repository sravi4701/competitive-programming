#include<bits/stdc++.h>
using namespace std;
int main()
{
float n;
int i;
while(true)
{
int c=0;
float s=0.0;
cin>>n;
if(n==0.0)
{
break;
}
for(i=1;i<=280;i++)
{
s+=1.0/(i+1.0);
c=c+1;
if(s>=n)
{
break;
}
}
cout<<c<<" card(s)"<<endl;
}
return 0;
}
