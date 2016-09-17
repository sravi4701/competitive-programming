#include<iostream>
using namespace std;
int main()
{
long t;
long long int n;
cin>>t;
while(t--)
{
cin>>n;
cout<<(2*n+(n*(n-1)*3)/2)%1000007<<endl;
}
return 0;
}
