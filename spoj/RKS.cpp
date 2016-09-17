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
std::map<int, int>cnt;
std::map<int, int>pos;
bool comp(int a,int b){
	if(cnt[a]>cnt[b]){
		return true;
	}
	else if(cnt[a]==cnt[b]){
		return pos[a]<pos[b];
	}
	else{
		return false;
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,c;
    cin>>n>>c;
    vi arr(n);
    loop(i,0,n){
    	cin>>arr[i];
    	cnt[arr[i]]++;
    }
    loopd(i,n-1,0){
    	pos[arr[i]]=i;
    }
    sort(arr.begin(),arr.end(),comp);
    loop(i,0,n) cout << arr[i] <<" ";
}
/*******************main ends here **************************/
