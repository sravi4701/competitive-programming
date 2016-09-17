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
int T[400005][2];
int lazy[400005]={0}	;
void build(int node,int start,int end){
	if(start==end){
		T[node][0]=0;
		T[node][1]=1;
	}
	else{
		int mid=(start+end)/2;
		build(node*2+1,start,mid);
		build(node*2+2,mid+1,end);
		T[node][0]=T[node*2+1][0]+T[node*2+2][0];
		T[node][1]=T[node*2+1][1]+T[node*2+2][1];
	}
}
void update(int node,int start,int end,int l,int r){
	
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,q;
    // int arr[n];
    // memset(arr,0,sizeof(arr));
    int c,l,r;
    cin>>q;
    while(q--){
    	cin>>c>>l>>r;
    	if(c==0){

    	}
    	else{

    	}
    }
    
}
/*******************main ends here **************************/