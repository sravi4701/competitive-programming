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
void Make_b(int *A,int *B, int N){

	ll x=1LL;
	for(int i=0;i<N;i++){
		x=x*A[i];
	}
	for(int i=0;i<N;i++){
		B[i]
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n;
    cin>>n;
    int A[n];
    loop(i,0,n) cin>>A[i];
    int B[n];
    int q;
    cin>>q;
    while(q--){
    	int a;
    	cin>>a;
    	if(a==1){
    		int b;
    		cin>>b;
    		Make_b(A,B,n);
    		cout << B[b-1]%MOD <<endl;
    	}
    	else{
    		int b,c;
    		cin>>b>>c;
    		new_value*=A[b-1];
    		update_value*=c;
    		A[b-1]=c;
    	}
    }
}
/*******************main ends here **************************/
