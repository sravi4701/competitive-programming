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
int visited[1001]={0};
set<int>G[1001];
int n;
int dfs(int i){
	for(int j=1;j<=n;j++){
		visited[j]=0;
	}
	stack<int>st;
	int s=0;
	st.push(i);
	visited[i]=1;
	s++;
	while(!st.empty()){
		int elem=st.top();
		st.pop();
		set<int>::iterator itr;
		for(itr=G[elem].begin();itr!=G[elem].end();++itr){
			if(!visited[*itr]){
				s++;
				st.push(*itr);
				visited[*itr]=1;
			}
		}
	}
	return s;
}
/******************main starts here *************************/
int main()
{
    be_fast;
   	int d;
   	cin>>n>>d;
   	loop(i,0,d){
   		int a,b;
   		cin>>a>>b;
   		G[a].insert(b);
   	}
   	int ans=100000;
   	for(int i=1;i<=n;i++){
   			int x=dfs(i);
   			if(ans>x){
   				ans=x;
   		}
   	}
   	cout << ans <<endl;
}
/*******************main ends here **************************/
	