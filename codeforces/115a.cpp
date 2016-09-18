/*input
5
-1
1
2
1
-1
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
int arr[2005];
vector<int> G[2005];
vector<int>tovisit;
vector<int>visited(2005,0);
int dfs(int i){
	// cout << "dfs for "<<i<<endl;
	if(G[i].size()==0){
		// cout << "returning "<<1<<endl;
		return 1;
	}
	int ans=0;
	for(int j=0;j<G[i].size();j++){
		if(!visited[G[i][j]]){
			visited[G[i][j]]=1;
			ans=max(ans,dfs(G[i][j]));
		}
	}
	// for(int child: G[i]){
	// 	if (!visited[child]){
	// 		visited[child] = 1;
	// 		ans = max(ans, dfs(child));
	// 	}
	// }
	// cout << "returning "<<ans+1 <<endl;
	return ans+1;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
    	if(arr[i]!=-1){
    		G[arr[i]].push_back(i);
    	}
    	else{
    		tovisit.push_back(i);
    	}
    }
    int ans=0;
    for(int i=0;i<tovisit.size();i++){
    	ans=max(ans,dfs(tovisit[i]));
    }
    cout << ans <<endl;
}
/*******************main ends here **************************/