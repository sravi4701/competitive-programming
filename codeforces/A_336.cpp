/*input
5 10
2 77
3 33
8 21
9 12
10 64
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
bool comp(const pair<int,int>&a,const pair<int,int>&b){
	return (a.first>b.first);
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,s,f,t;
    cin>>n>>s;
    vector<pair<int,int> >v;
    loop(i,0,n){
    	cin>>f>>t;
    	v.push_back(make_pair(f,t));
    }

    sort(v.begin(),v.end(),comp);
    int ans=0;
    int floor=s;
    ans+=(floor-v[0].first);
    if(v[0].second>ans){
    	ans+=(v[0].second-ans);
    }
    floor=v[0].first;
    for(int i=1;i<n;i++){
    	ans+=(floor-v[i].first);
    	if(v[i].second > ans){
    		ans+=(v[i].second-ans);
    	}
    	floor=v[i].first;
    }
    ans+=(v[n-1].first);
    cout << ans <<endl;
}
/*******************main ends here **************************/