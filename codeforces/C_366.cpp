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
int Tree[1200005];
queue<int>que;
void build(int node,int start,int end){
	if(start==end){
		Tree[node]=0;
		return;
	}
	int mid=(start+end)/2;
	build(node*2+1,start,mid);
	build(node*2+2,mid+1,end);
	Tree[node]=Tree[node*2+1]+Tree[node*2+2];
}
void update1(int node,int start,int end,int x){
	if(start==end){
		Tree[node]++;
		return;
	}
	int mid=(start+end)/2;
	if(x>=start && x<=mid){
		update1(node*2+1,start,mid,x);
	}
	else{
		update1(node*2+2,mid+1,end,x);
	}
	Tree[node]=Tree[node*2+1]+Tree[node*2+2];
}
void update2(int node,int start,int end,int x){
	if(start==end){
		Tree[node]=0;
		return;
	}
	int mid=(start+end)/2;
	if(x>=start && x<=mid){
		update2(node*2+1,start,mid,x);
	}
	else{
		update2(node*2+2,mid+1,end,x);
	}
	Tree[node]=Tree[node*2+1]+Tree[node*2+2];
}
void update3(){

}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,q;
    cin>>n>>q;
    build(0,0,n-1);
    while(q--){
    	int ch,x;
    	cin>>ch>>x;
    	if(ch==1){
    		update1(0,0,n-1,x-1);
    		// que.push(x-1);
    	}
    	else if(ch==2){
    		update2(0,0,n-1,x-1);
    	}
    	else{
    		update3(0,0,n-1,x-1);
    	}
    	cout << Tree[0]<<endl;
    }
}
/*******************main ends here **************************/