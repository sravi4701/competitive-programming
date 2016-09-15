#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll a,b;
	cin>>a;
	ll c1=0,c2=0;
	for(ll i=0;i<a;i++)
	{
		cin>>b;
		if(b%2==0) c1++;
		else c2++;
	}
	if(c1>c2) cout << "READY FOR BATTLE" <<endl;
	else cout << "NOT READY" <<endl;
}
