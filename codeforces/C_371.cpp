/*input
12
+ 1
+ 241
? 1
+ 361
- 241
? 0101
+ 101
? 101
- 101
? 101
+ 4000
? 0
*/
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
typedef map<string,multiset<int> > sm;
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
map<ll,int>m;

string bs(ll n){
	string s;
	while(n!=0){
		ll r=n%10;
		n/=10;
		if(r&1){
			s.push_back('1');
		}
		else{
			s.push_back('0');
		}
	}
	reverse(all(s));
	return s;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int t;
    cin>>t;
    while(t--){
    	char ch;
    	ll n;
    	string s;
    	cin>>ch;
    	if(ch=='+'){
    		cin>>n;
    		m[stoll(bs(n))]++;

    	}
    	else if(ch=='-'){
    		cin>>n;
    		m[stoll(bs(n))]--;
    	}
    	else if(ch=='?'){
    		cin>>s;
    		ll x=stoll(s);
    		cout << m[x] <<endl;
    	}
    }
    
}
/*******************main ends here **************************/