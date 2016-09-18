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


/******************main starts here *************************/
int main()
{
    be_fast;
	int n,a;
	cin>>n>>a;
	int arr[n];
	loop(i,0,n){
		cin>>arr[i];
	}       
	a--;
	int j=a-1;
	int res=0;
	if(arr[a]==1){
		res++;
	}
	int i;
	for(i=a+1;i<n;i++){
		if(i>=n or j<0){
			break;
		}
		if((arr[i]==1 && arr[j]==1)){
			res+=2;
		}
		j--;
	}
	if(i>=n && j>=0){
		while(j>=0){
			if(arr[j]==1){
				res++;
			}
			j--;
		}
	}
	if(j<0 && i<n){	
		while(i<n){
			if(arr[i]==1){
				res++;
			}
			i++;
		}
	}
	cout << res <<endl;
}
/*******************main ends here **************************/
