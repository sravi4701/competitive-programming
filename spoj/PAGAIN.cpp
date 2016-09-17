#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
/*
bool is_prime[600];
ll seg_sieve(ll n){
	ll l=n-600;
	ll r=n;
	memset(is_prime,true,sizeof(is_prime));
	for(ll i=2;i*i<=r;i++){
		for(ll j=max(i*i,(r+(l-1))/(i*i));j<=r;j+=i){
			is_prime[j-l]=false;
		}
	}
	ll x,y,i;
	for(i=max((ll)2,l);i<=r;i++){
		if(is_prime[i-l]){
			y=x;
			x=i;
		}
	}
	if(x<n){
		return x;
	}
	else if(y<n){
		return y;
	}
}
*/

ll mod_pow(ll b,ll e,ll mod){
	ll res=1;
	while(e){
		if(e&1){
			res=((res%mod)*(b%mod))%mod;
		}
		b=((b%mod)*(b%mod))%mod;
		e>>=1;
	}
	return res;
}
bool is_prime(ll n){
	if(n<=1) return false;
	if(n==2 or n==3 ) return true;
	if(!(n%2)) return false;
	srand(time(0));
	for(int i=0;i<100;i++){
		ll a=1+rand()%(n-1);
		if(mod_pow(a,n-1,n)!=1){
			return false;
		}
	}
	return true;
}

int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		n=(n%2==0?n-1:n-2);
		while(true){
			if(is_prime(n)){
				cout << n <<endl;
				break;
			}
			n-=2;
		}
	}
}