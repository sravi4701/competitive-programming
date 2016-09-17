/*input
5
1 2 3 4 5
6
Q 2 4
Q 2 5
U 1 6
Q 1 5
U 1 7
Q 1 5
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
int Tree[300005][2];
int arr[100005];

void build(int node,int start,int end){
	if(start==end){
		Tree[node][0]=0;
		Tree[node][1]=arr[start];
	}
	else{
		int mid=(start+end)/2;
		build(node*2+1,start,mid);
		build(node*2+2,mid+1,end);
		int i = 2*node+1, j = 2*node+2;
		int arr[4] = {Tree[i][0], Tree[i][1], Tree[j][0], Tree[j][1]};
		sort(arr,arr+4);
		Tree[node][0]=arr[2];
		Tree[node][1]=arr[3];
	}
}
void update(int node,int start,int end,int idx,int val){
	// cout << "Updating for start= " << start << " end= " << end << " idx= " << idx << " val= " << val << endl;
	if(start==end){
		Tree[node][0]=0;
		Tree[node][1]=val;
		return;
	}
	if(idx < start or idx > end) return;
	
	int mid=(start+end)/2;

	if(idx<=mid){
		update(2*node+1,start,mid,idx,val);
	}
	if (idx > mid){
		update(2*node+2, mid+1, end, idx, val);
	}
	int i=2*node+1,j=2*node+2;
	int arr[4] = {Tree[i][0], Tree[i][1], Tree[j][0], Tree[j][1]};
	sort(arr,arr+4);
	Tree[node][0]=arr[2];
	Tree[node][1]=arr[3];
}
int* query(int node,int start,int end,int l,int r){
	// cout << "Checking for start= " << start << " end= " << end << " l= " << l << " r = " << r << endl;
	if(start>r or end<l){
		int *temp = new int[2];
		temp[0]=0;
		temp[1]=0;
		return temp;
	}
	if(start == l and end == r){
		int *temp = new int[2];
		temp[0] = Tree[node][0];
		temp[1] = Tree[node][1];
		return temp;
	}
	int mid=(start+end)/2;
	if(r<=mid){
		return query(node*2+1,start,mid,l,r);
	}
	if(l>mid){
		return query(node*2+2,mid+1,end,l,r);
	}
	int *p1=new int[2];
	int *p2=new int[2];
	p1=query(node*2+1,start,mid,l,mid);
	p2=query(node*2+2,mid+1,end,mid+1,r);
	int arr[4]={p1[0],p1[1],p2[0],p2[1]};
	sort(arr,arr+4);
	int *temp=new int[2];
	temp[0]=arr[2];
	temp[1]=arr[3];
	return temp;

}
/******************main starts here *************************/

int main()
{
    be_fast;
	int n;
	cin>>n;
	loop(i,0,n){
		cin>>arr[i];
	}
	int q,l,r;
	build(0,0,n-1);	
	// for(int i=0;i<10;i++){
		// cout << Tree[i][0]<<" "<<Tree[i][1]<<endl;
	// }
	cin>>q;
	while(q--){
		char ch;
		cin>>ch;
		cin>>l>>r;
		if(ch=='Q'){
			// cout << "entering into query"<<endl;
			int *temp=new int[2];
			l--;r--;
			temp=query(0,0,n-1,l,r);
			cout << temp[0]+temp[1]<<endl;
		}
		else{
			l--;
			update(0,0,n-1,l,r);
			// cout << "Here's the segment tree" << endl;
			// for (int i = 0; i < 10; i += 1){
				// cout << "i= " << i << "{" << Tree[i][0] << "," << Tree[i][1] << "}" << "  ";
			// }
			// cout << endl;
		}
	}
}
/*******************main ends here **************************/