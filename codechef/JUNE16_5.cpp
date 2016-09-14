//__author__= "Ravi Shankar"

#include<bits/stdc++.h>
using namespace std;

/*******usful typedef's *********/
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;
typedef list<int>li;
typedef list<li>lii;
typedef set<int>si;
typedef set<si>sii;
typedef map<int,int> mi;
/**************some useful macros/preprocessor********/
#define be_fast std::ios::sync_with_stdio(false);std::cin.tie(NULL)
#define print cout <<
#define loop(a,b,c)   for (int (a)=(b); (a)<(c); ++(a))
#define loopn(a,b,c)  for (int (a)=(b); (a)<=(c); ++(a))
#define loopd(a,b,c)  for (int (a)=(b); (a)>=(c); --(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define X first
#define Y second
///iterator range
#define all(c) c.begin(), c.end()
///reverse all iterator
#define rall(c) c.rbegin(),c.rend()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++))
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
/***************all user defines functions *******************/
ll modPow(ll a, ll x, ll p) {
    ll res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll modInverse(ll a, ll p) {
    return modPow(a, p-2, p);
}
ll ncr_mod(ll n, ll k, ll p) {
    vector<ll>f(n+1,1);
    for(int i=2;i<=n;i++){
    	f[i]=(f[i-1]*i)%p;
    }
    return (f[n]*(modInverse(f[n-k],p) * modInverse(f[k],p)%p))%p;
}
/******************main starts here *************************/
int main()
{
    be_fast;
   	int t;
   	cin>>t;
   	while(t--){
   		int n,k;
   		cin>>n>>k;
   		int arr[n];
   		int zero=0;
   		loop(i,0,n){
   			cin>>arr[i];
   			if(arr[i]==0){
   				zero++;
   			}
   		}
   		ll f2=modBinomial(n,2,MOD)+1;
   		if(k==1){
   			cout << n <<endl;
   			continue;
   		}
   		if(k==2){
   			cout << f2 <<endl;
   			continue;
   		}
   		ll res=0;
   		if(k%2==1){
   			res=(modBinomial(n,k,MOD)+n)%MOD;
   			if(zero>0){
   				res=(res+1)%MOD;
   			}
   		}
   		else{
   			res=(modBinomial(n,k,MOD)+f2)%MOD;
   		}
   		cout << res <<endl;
   	} 
}
/*******************main ends here **************************/