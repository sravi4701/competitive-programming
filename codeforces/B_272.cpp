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
	string a,b;
	cin>>a>>b;
	int plus_a=count(all(a),'+');
	int minus_a=count(all(a),'-');
	int q=count(all(b),'?');
	int minus_b=0,plus_b=0;
	int c=0;
	minus_b=count(all(b),'-');
	plus_b=count(all(b),'+');
	int x=pow(2,q);
	for(int i=0;i<x;i++){
		int p=x/2;
		int mbb=0;
		int pbb=0;
		for(int j=0;j<q;j++){
			if(p==1){
				//cout << i%2;
				if(i%2==0){
					pbb++;
				}
				else{
					mbb++;
				}
			}
			else{
				//cout << i/p%2;
				if((i/p%2)==0){
					pbb++;
				}
				else{
					mbb++;
				}
			}
			p=p/2;
		}
		if((pbb+plus_b)==plus_a && (mbb+minus_b)==minus_a){
			c++;
		}
		//cout <<endl;
	}
	printf("%0.12f",float(c)/float(x));
}
/*******************main ends here **************************/
