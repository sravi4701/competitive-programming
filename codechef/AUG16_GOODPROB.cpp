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
int n;
int arr[100005];
int MAX(int i,int j){
	return *max_element(arr+i,arr+j+1);
}
int _F(int i,int j){
	return (((arr[i]&arr[j])==arr[i] or (arr[i]&arr[j])==arr[j])?1:0);
}
void solve(){
	ll ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans+=MAX(i,j)*(_F(i,j));
		}
	}
	cout << ans <<endl;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    cin>>n;
    loop(i,0,n){
    	cin>>arr[i];
    }
	solve();    
}
/*******************main ends here **************************/