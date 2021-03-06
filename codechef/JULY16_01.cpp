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
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	loop(i,0,n){
    		cin>>arr[i];
    	}
    	int full=0;
    	int fail=0;
    	ll ans=0;
    	loop(i,0,n){
    		if(arr[i]==5){
    			full++;
    		}
    		if(arr[i]==2){
    			fail=1;
    		}
    		ans+=arr[i];
    	}
    	if(fail==1){
    		cout << "No"<<endl;
    	}
    	else{
    		float avg=(float)ans/n;
    		if(full>0 && (avg-4.0)>=0.0){
    			cout << "Yes"<<endl;
    		}
    		else{
    			cout << "No"<<endl;
    		}
    	}
    }
}
/*******************main ends here **************************/