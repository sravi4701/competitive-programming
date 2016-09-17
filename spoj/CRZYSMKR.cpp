#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 11
ll mod_pow(ll base,ll exp){
	ll res=1LL;
	while(exp>0){
		if(exp&1){
			res=(res*base)%mod;
		}
		exp>>=1;
		base=((base%mod)*(base%mod))%mod;
	}
	return res%mod;
}
int main(){	
	int t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		ll f=(((mod_pow(34,n)+(((30%11)*(n%11))%11))%11)+(32%11))%11;
		if(f==0){
			cout << 0 <<endl;
		}
		else
			cout << 11-f<<endl;
	}
}