#include<iostream>
using namespace std;
void multiply(long long *,long long *);
int main()
{
long long int n,l1,l2,i;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>l1>>l2;
multiply(&l1,&l2);
}
return 0;
}
void multiply(long long *l1,long long *l2)
{
cout<<(*l1)*(*l2)<<endl;
}
