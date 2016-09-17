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
bool visited[10005]={false};
string dfs(vector<int>G[],int i){
	stack<int>st;
	if(!visited[i]){
		st.push(i);
		visited[i]=1;
	}
	while(!st.empty()){
		int elem=st.top();
		st.pop();
		for(int i=0;i<G[elem].size();i++){
			if(visited[G[elem][i]]){
				return "NO";
			}
			else{
				st.push(G[elem][i]);
				visited[G[elem][i]]=1;
			}
		}
	}
	return "YES";
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int v,e,x,y;
    cin>>v>>e;
    vector<int>G[v];
    for(int i=0;i<e;i++){
    	cin>>x>>y;
    	x--;y--;
    	G[x].push_back(y);
    }
    string ans=dfs(G,0);
    for(int i=0;i<v;i++){
    	if(!visited[i]){
    		ans="NO";
    	}
    }
    cout << ans <<endl;
}
/*******************main ends here **************************/