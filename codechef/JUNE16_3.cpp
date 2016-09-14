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
	int t;
	cin>>t;
	while(t--){
		string A,B;
		cin>>A>>B;
		int n=A.length();
		int zero=0,one=0;
		int total_zero=0,total_one=0;
		if(A==B){
			cout << "Lucky Chef" <<endl;
			cout << 0 <<endl;
			return 0;
		}
		for(int i=0;i<A.length();i++){
			if(A[i]=='0'){
				total_zero++;
			}
			else if(A[i]=='1'){
				total_one++;
			}
			if((A[i]=='0' && B[i]=='1') or (A[i]=='1' && B[i]=='0')){
				if(A[i]=='0'){
					zero++;
				}
				if(A[i]=='1'){
					one++;
				}
			}
		}
		if(zero==0 or one ==0){
			if(zero!=0 && total_one!=0){
				cout <<"Lucky Chef"<<endl;
				cout << zero <<endl;
			}
			else if(one!=0 && total_zero!=0){
				cout << "Lucky Chef" <<endl;
				cout << one <<endl;
			}
			else
				cout << "Unlucky Chef" <<endl;
		}
		else{
			cout << "Lucky Chef" <<endl;
			cout << max(one,zero)<<endl;
		}
	}       
}
/*******************main ends here **************************/
