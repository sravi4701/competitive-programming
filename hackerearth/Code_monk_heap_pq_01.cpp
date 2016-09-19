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
    int arr[n];
    loop(i,0,n){
    	cin>>arr[i];
    }   
    priority_queue<int>pq;
    loop(i,0,n){
    	if(i==0 or i==1){
    		print -1<<endl;
    		pq.push(arr[i]);
    	}
    	else{
    		pq.push(arr[i]);
    		int a=pq.top();
    		pq.pop();
    		int b=pq.top();
    		pq.pop();
    		int c=pq.top();
    		pq.push(a);
    		pq.push(b);
    		print a*1LL*b*1LL*c <<endl;
    	}
    }
}
/*******************main ends here **************************/
	