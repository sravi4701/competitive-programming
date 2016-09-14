#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll a,b,n,q;
	cin>>n;
	vector<ll>vec(n);
	for(ll i=0;i<n;i++) cin>>vec[i];
	cin>>q;
	vector<ll>k(q);
	for(ll i=0;i<q;i++) cin>>k[i];
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	for(int i=0;i<q;i++)
	{
		if(k[i]==0)
		{
			cout << accumulate(vec.begin(),vec.end(),0) <<endl;
		}
		else
		{
			cout << accumulate(vec.begin()+k[i],vec.end(),0) <<endl;
		}
	}
}
