#include<bits/stdc++.h>
using namespace std;
void matching(char *,char*);
size_t m,n;
int main()
{
char t[1000],p[1000];

cout<<"enter the parent string \n";
cin>>t;
cout<<"enter the mathing string\n";
cin>>p;
m=strlen(p);
n=strlen(t);
matching(t,p);
}
void matching(char *t,char *p)
{
int i,j,f;
for(i=0;i<=m-n;i++)
{
j=0;
while(j<m && t[i+j]==p[j])
{
j+=1;
}
if(j==m)
{
f=1;
break;
}
}
if(f==1)
{
cout<<"found\t"<<i;
}
}
