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

map<int,int>cnt;
bool comp(int a,int b){
	if(cnt[a]!=cnt[b]){
		return cnt[a]>cnt[b];
	}
	else{
		return a<b;
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
	int k,m,n;
	cin>>k>>m>>n;
	vector<int>a(n);
	loop(i,0,n){
		cin>>a[i];
		cnt[a[i]]++;
	}
	set<int>s(all(a));
	vector<int>arr(all(s));
	sort(all(arr),comp);
	loop(i,0,k){
		print arr[i] <<endl;
	}
}
/*******************main ends here **************************/
