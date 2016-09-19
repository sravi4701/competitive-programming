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
void initialize(int arr[],int n){
	loop(i,0,n){
		arr[i]=i;
	}
}
int root(int arr[],int i){
	while(i!=arr[i]){
		arr[i]=arr[arr[i]];
		i=arr[i];
	}
	return i;
}
void _union(int arr[],int x,int y){
	int rx=root(arr,x);
	int ry=root(arr,y);
	if(rx==ry){
		return;
	}
	arr[rx]=arr[ry];
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,q;
    cin>>n>>q;
    int arr[n];
    initialize(arr,n);
    int op,a,b;
    while(q--){
    	cin>>op;
    	if(op==1){
    		cin>>a>>b;
    		a--;b--;
    		_union(arr,a,b);
    	}
    	else if(op==2){
    		cin>>a;
    		a--;
    		int x=root(arr,a);
    		arr[x]=a;
    		arr[a]=a;
    	}
    	else{
    		cin>>a;
    		a--;
    		cout << root(arr,a)+1<<endl;
    	}
    }   
}
/*******************main ends here **************************/
	