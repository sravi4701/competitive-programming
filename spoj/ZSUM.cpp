#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
ll mod_pow(ll base,ll exp){
	ll res=1LL;
	while(exp>0){
		if(exp&1){
			res=(res*base)%mod;
		}
		exp>>=1;
		base=((base%mod)*(base%mod))%mod;
	}
	return res;
}
int main(){
	ll n,k;
	while(true){
		cin>>n>>k;
		if(n==0 && k==0)break;
		ll a=mod_pow(n,n);
		ll b=(2*mod_pow(n-1,n-1))%mod;
		ll c=mod_pow(n,k);
		ll d=(2*mod_pow(n-1,k))%mod;
		cout << ((a+b)%mod+(c+d)%mod)%mod<<endl;
	}
}