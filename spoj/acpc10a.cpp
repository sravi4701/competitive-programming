#include<iostream>
using namespace std;
void checkpro(int ,int ,int);
int main()
{
int x,y,z;
while(1)
{
cin>>x>>y>>z;
if(x==0&&y==0&&z==0)
{
break;
}
else
checkpro(x,y,z);

}
}
void checkpro(int p,int q,int r)
{
int s;
long long int f;
if(p!=0&&q!=0)
{
s=q/p;
}
else
{
s=0;
}
if(q-p==r-q)
{
cout<<"AP"<<" "<<(r+(q-p))<<endl;
}
else
{
f=p*s*s*s;
cout<<"GP"<<" "<<f<<endl;
}
}
