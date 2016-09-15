#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long d,n;
        cin>>n>>d;
        long long c{1};
        long long p=n/2;
        for(long long i=1;i<d;i++)
        {
		p--;
		c+=2;
        }
        cout << p+c <<endl;
}
