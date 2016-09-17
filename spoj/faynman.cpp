#include<iostream>
using namespace std;
void count_square(long long *);
int main()
{
long long int n;
while(1)
{
cin>>n;
if(n==0)
{
break;
}
else
{
count_square(&n);
}
}
return 0;
}
void count_square(long long *b)
{
long long x;
x=((*b)*(*b+1)*(2*(*b)+1))/6;
cout<<x<<endl;
}
