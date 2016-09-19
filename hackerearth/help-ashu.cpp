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
int arr[100005];
int Tree[300005];
int n;
void build(int node,int start,int end){
	if(start==end){
		Tree[node]=arr[start];
	}
	else{
		int mid=(start+end)/2;
		build(node*2+1,start,mid);
		build(node*2+2,mid+1,end);
		Tree[node]=Tree[node*2+1]+Tree[node*2+2];
	}
}

void update(int node,int start,int end,int idx,int val){
	if(start==end){
		Tree[node]=Tree[node]-arr[idx]+val;
		arr[idx]=val;
	}
	else{
		int mid=(start+end)/2;
		if(idx>=start && idx<=mid){
			update(node*2+1,start,mid,idx,val);
		}
		else{
			update(node*2+2,mid+1,end,idx,val);
		}
		Tree[node]=Tree[node*2+1]+Tree[node*2+2];
	}
}

int query(int node,int start,int end,int l,int r){
	if(start>r or end<l){
		return 0;
	}
	else if(start>=l && end<=r){
		return Tree[node];
	}
	else{
		int mid=(start+end)/2;
		int p1=query(node*2+1,start,mid,l,r);
		int p2=query(node*2+2,mid+1,end,l,r);
		return (p1+p2);
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
    cin>>n;
    int x;
    loop(i,0,n){
    	cin>>x;
    	if(x%2==0){
    		arr[i]=1;
    	}
    	else{
    		arr[i]=0;
    	}
    }
    int q,ch,l,r,index,val;
    cin>>q;
    build(0,0,n-1);
    while(q--){
    	cin>>ch;
    	if(ch==0){
    		cin>>index>>val;
    		index--;
    		if(val&1){
    			val=0;
    		}
    		else{
    			val=1;
    		}
    		update(0,0,n-1,index,val);
    	}
    	else if(ch==1){
    		cin>>l>>r;
    		l--;r--;
    		cout << query(0,0,n-1,l,r)<<endl;
    	}
    	else{
    		cin>>l>>r;
    		l--;r--;
    		cout << (r-l)+(r!=l?1:0)-query(0,0,n-1,l,r)<<endl;
    	}
    }
}
/*******************main ends here **************************/