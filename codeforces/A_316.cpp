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
bool max_compare(map<int,int>::value_type&a,map<int,int>::value_type&b){
	return (a.second<b.second);
}
/******************main starts here *************************/
int main()
{
    be_fast;
	int n,m;
	cin>>n>>m;
	vector<vector<int> >arr(m,vector<int>(n,0));
	loop(i,0,m){
		loop(j,0,n){
			cin>>arr[i][j];
		}
	}    
	map<int,int>cnt;
	loop(i,0,m){
		int index,mx=-1;
		loop(j,0,n){
			if(arr[i][j]>mx){
				index=j;
			}
		}
		cnt[index]++;
	}
	map<int,int>::iterator itr;
	itr=max_element(cnt.begin(),cnt.end(),max_compare);
	cout << itr->first +1 <<endl;

}
/*******************main ends here **************************/
