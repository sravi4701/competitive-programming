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
int gcd(int a,int b){
	return (b==0?a:gcd(b,a%b));
}
int no_of_divisors(int g){
	if(g==1){
		return 1;
	}
	int ans=1;
	for(int i=2;i*i<=g;i++){
		// cout << "Checking for : "<<i <<endl;
		int c=0;
		while(g%i==0){
			c++;
			g=g/i;
		}
 
		ans*=(c+1);
		// cout << "ans in loop: "<<ans <<endl;
	}
	if(g>1){
		ans*=2;
		// cout <<"ans in condition: "<<ans <<endl;
	}
	return ans;
}
/******************main starts here *************************/
int main()
{
    //be_fast;
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--){
    	scanf("%d%d",&a,&b);
    	printf("%d\n",no_of_divisors(gcd(a,b)));
    }
    
}
/*******************main ends here **************************/ 