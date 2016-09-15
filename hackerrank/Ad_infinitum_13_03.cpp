#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll s=(n*(n+1))/2;

		if(s%2==0 and (k%2==0 and (k>=-s and k<=s)))
		{
                        cout << "YES" <<endl;
		}
		else if(s%2!=0 and (k%2!=0 and (k>=-s and k<=s)))
		{
			cout << "YES" <<endl;
		}
		else
		{
			cout << "NO" <<endl;
		}
	}
}
