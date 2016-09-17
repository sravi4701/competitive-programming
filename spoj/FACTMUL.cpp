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
#define ict int t;cin>>t;while(t--)
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
/***************all user defines functions ******************/
ll answer(ll a,ll b,ll mod){
	ll ans=0;
	ll base=1;
	while(b>0){
		if(b&1){
			ans+=((a%mod)*(base%mod))%mod;
		}
		b>>=1;
		base=((base%mod)*2)%mod;
	}
	return ans%mod;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    ll n;
    cin>>n;
    ll pre[n+1];
    pre[0]=pre[1]=1;
    ll ans=1;
    ll mod=109546051211;
    for(ll i=2;i<=n;i++){
    	pre[i]=answer(i%mod,pre[i-1]%mod,mod);
    	ans=answer(ans%mod,pre[i]%mod,mod);
    	// cout << "ans on "<<i<<"th iteration : "<<ans<<endl;
    	if(ans==0){
    		break;
    	}
    }
    cout << ans%mod <<endl;

}
/*******************main ends here **************************/