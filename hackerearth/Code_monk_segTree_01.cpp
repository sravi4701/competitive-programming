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
string s;
string Tree[3000020];
int btodmod3(string s){
	int base=2;
	int power=1;
	int ans=0;
	int n=s.length();
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
			ans=(ans+power)%3;
		}
		power=(power*base)%3;
	}
	return ans;
}
void build(int node,int start,int end,string Tree[]){
	if(start==end){
		Tree[node]=string(1,s[start]);
	}	
	else{
		int mid=(start+end)/2;
		build(node*2+1,start,mid,Tree);
		build(node*2+2,mid+1,end,Tree);
		Tree[node]=Tree[node*2+1]+Tree[node*2+2];
	}
}
void update(int node,int start,int end,int idx,string Tree[]){
	if(start==end){
		s[idx]='1';
		Tree[node]="1";
	}
	else{
		int mid=(start+end)/2;
		if(idx>=start && idx<=mid){
			update(node*2+1,start,mid,idx,Tree);
		}
		else{
			update(node*2+2,mid+1,end,idx,Tree);
		}
		Tree[node]=Tree[node*2+1]+Tree[node*2+2];
	}
}
string query(int node,int start,int end,int l,int r,string Tree[]){
	if(start>r or end<l){
		return "";
	}
	else if(start>=l && end<=r){
		return Tree[node];
	}
	else{
		int mid=(start+end)/2;
		string p1=query(node*2+1,start,mid,l,r,Tree);
		string p2=query(node*2+2,mid+1,end,l,r,Tree);
		return (p1+p2);
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
   	cin>>n;
   	cin>>s;
   	int q;
   	cin>>q;
   	build(0,0,n-1,Tree);
   	while(q--){
   		int ch;
   		cin>>ch;
   		if(ch==0){
   			int l,r;
   			cin>>l>>r;
   			string t=query(0,0,n-1,l,r,Tree);
   			cout << btodmod3(t)<<endl;
   		}
   		else{
   			int index;
   			cin>>index;
   			update(0,0,n-1,index,Tree);
   		}
   	}
    
}
/*******************main ends here **************************/