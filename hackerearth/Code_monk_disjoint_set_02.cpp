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
	for(int i=0;i<n;i++){
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
	arr[rx]=ry;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n;   
    cin>>n;
    int E[n];
    int arr[n];
    initialize(arr,n);
    loop(i,0,n){
    	cin>>E[i];
    }
    int q,a,b;
    cin>>q;
    while(q--){
    	cin>>a>>b;
    	a--;
    	b--;
   		_union(arr,a,b);
    }
    for(int i=0;i<n;i++){
    	arr[i]=root(arr,i);
    }
    map<int,multiset<int> > M;
    for(int i=0;i<n;i++){
    	M[arr[i]].insert(E[i]);
    }
    ll ans=1LL;
    map<int,multiset<int> >::iterator itr;
    for(itr=M.begin();itr!=M.end();++itr){
    	ll cnt=1LL;
    	int x=*(itr->second.begin());
    	(itr->second).erase((itr->second).begin());
    	multiset<int>::iterator itr2;
    	for(itr2!=(itr->second).begin();itr2!=(itr->second).end();++itr2){
    		if(*itr2!=x){
    			break;
    		}
    		cnt++;
    	}
    	ans=(ans*cnt)%MOD;
    }
    cout << ans <<endl;

}
/*******************main ends here **************************/
	