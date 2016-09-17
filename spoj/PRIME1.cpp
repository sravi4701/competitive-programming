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
bool used[100009];
void generate_prime(int l,int r){
	int n=r-l+1;
	for(int i=0;i<n;i++){
		used[i]=1;
	}
	for(int j=(l%2!=0);j<n;j+=2){
		used[j]=0;
	}
	int x=sqrt(r);
	for(int i=3;i<=x;i+=2){
		if(i>l && !used[i-l]){
			continue;
		}
		int j=l/i*i;
		if(j<l) j+=i;
		if(j==i) j+=i;
		j-=l;
		while(j<n){
			used[j]=0;
			j+=i;
		}
	}
	if(l<=1) used[1-l]=0;
	if(l<=2) used[2-l]=1;
	for(int i=0;i<n;i++){
		if(used[i]){
			cout << l+i <<endl;
		}
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int t;
    cin>>t;
    while(t--){
    	int l,r;
    	cin>>l>>r;
    	generate_prime(l,r);
    	cout <<endl;
    }
}
/*******************main ends here **************************/