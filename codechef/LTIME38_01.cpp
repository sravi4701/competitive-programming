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


/******************main starts here *************************/
int main()
{
    be_fast;
    ict{
    	int n,k;
    	cin>>n>>k;
    	int arr[n];
    	map<int,int>cnt;
    	vector<int>cancel;
    	loop(i,0,n){
    		cin>>arr[i];
    		cnt[arr[i]]++;
    		if(arr[i]==(i+1)){
    			cancel.push_back(arr[i]);
    		}
    	}
    	for(int i=0;i<cancel.size();i++){
    		cnt[cancel[i]]=-1;
    	}
    	int res=0;
    	map<int,int>::iterator it=cnt.begin();
    	for(;it!=cnt.end();++it){
    		if(it->second>0 && it->second>=k){
    			res++;
    		}
    	}
    	cout << res <<endl;

    }
    
}
/*******************main ends here **************************/