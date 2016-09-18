/*input
5
1 1 1 1 1
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


/******************main starts here *************************/
int main()
{
    be_fast;
    int n;
    cin>>n;
    ll arr[n];
    loop(i,0,n){
    	cin>>arr[i];
    }
    sort(arr,arr+n);
   	int m1,m2=1000000005;
   	m1=arr[0];
   	int index=0;
   	for(int i=1;i<n;i++){
   		if(arr[i]!=m1 and arr[i]<m2){
   			m2=arr[i];
   			index=i;
   		}
   	}
   	ll x=m2-m1;
   	for(int i=0;i<n;i++){
   		if(arr[i]<m2){
   			arr[i]+=x;
   		}
   		else if(arr[i]>m2){
   			arr[i]-=x;
   		}
   	}
   	string ans="YES";
   	for(int i=1;i<n;i++){
   		if(arr[i]!=arr[i-1]){
   			ans="NO";
   			break;
   		}
   	}
   	cout << ans <<endl;
}

/*******************main ends here **************************/