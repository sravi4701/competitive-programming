#include<bits/stdc++.h>
using namespace std;
int main()
{
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long n,b;
		cin>>n;
		long long a;
		cin>>a;
		for(long long i=1;i<n;i++)
		{
                        cin>>b;
                        a=__gcd(a,b);
		}
		cout << a*n <<endl;
	}
}
