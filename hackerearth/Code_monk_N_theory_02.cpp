#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
	map<ll,ll>mp;
	for(ll i=2;i*i<=n;++i)
	{
		while(n%i==0)
		{
			mp[i]++;
			n/=i;
		}
	}
	if(n!=1) mp[n]++;
	ll s=1;
	for(map<ll,ll>::iterator i=mp.begin();i!=mp.end();++i)
	{
                s*=(i->second+1);
	}
	if(s<4) cout << "NO" <<endl;
	else cout << "YES" <<endl;

}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	while(n--)
	{
		ll x;
		cin>>x;
		solve(x);
	}
}
