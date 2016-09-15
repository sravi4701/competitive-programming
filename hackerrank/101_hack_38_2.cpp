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
int factorization(int n){
	if(n%2==0){
		return 2;
	}
	int res=n;
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0){
			//cout << i <<endl;
			res=i;
			break;
		}
	}
	return res;
}
/******************main starts here *************************/
int main()
{
    be_fast;
	int n,k;
	cin>>n>>k;
	int x;
	cin>>x;
	int a=x;
	loop(i,1,n){
		cin>>x;
		a=__gcd(a,x);
	}       
	//cout <<"a=" <<a <<endl;
	int p=factorization(a);
	//cout << "p="<<p <<endl;
	int z=k/p;
	//cout << "z" <<z<<endl;
	cout << "z*k"<<z*p <<endl;	
}
/*******************main ends here **************************/
