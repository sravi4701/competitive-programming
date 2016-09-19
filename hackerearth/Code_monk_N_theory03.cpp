#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD=1000000007;
ll gcd(ll a,ll b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
template<class T>
T modpower(T a,T b , T c)
{
        a%=c;
        T ans=1;
        while(b>0)
        {
		if(b&1) ans=(ans*a)%c;
		a=(a*a)%c;
		b>>=1;
        }
        return ans;
}

int main()
{
        ll n;
        cin>>n;
        vector<ll>vec(n);
        for(ll i=0;i<n;i++) cin>>vec[i];
        ll gc=gcd(vec[0],vec[1]);
        for(ll i=2;i<n;i++)
        {
		gc=gcd(gc,vec[i]);
        }
        ll ans=modpower(vec[0],gc,MOD);
        for(ll i=1;i<n;i++)
        {
		ans=(ans*modpower(vec[i],gc,MOD))%MOD;
        }
        cout << ans <<endl;

}
