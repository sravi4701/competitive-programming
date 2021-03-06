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
int prime[100001];
int gold_bach(int n){
	for(int i=0;i<=100000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<sqrt(100000);i++){
		if(prime[i]){
			for(int j=i;j*i<=100000;j++){
				prime[i*j]=0;
			}
		}
	}
	int res=0;
	for(int i=0;i<=n/2;i++){
		if(prime[i] && prime[n-i]){
			res++;
		}
	}
	return res;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	if(gold_bach(n)){
    		cout << "Deepa" <<endl;
    	}
    	else{
    		cout << "Arjit" <<endl;
    	}
    }
       
}
/*******************main ends here **************************/
