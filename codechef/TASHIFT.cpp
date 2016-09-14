/*input
9
ccccccccc
cccbccccb
*/
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
void max_shift(string a,string b){
	string s=a+"$"+b;
	int n=s.length();
	int m=a.length();
	int z[n];
	z[0]=0;
	int l=0,r=0;
	for(int k=1;k<n;k++){
		if(k>r){
			l=r=k;
			while(r<n and s[r]==s[r-l]) r++;
			z[k]=(r-l);r--;
		}
		else{
			int k1=(k-l);
			if((z[k1]+k)<=r){
				z[k]=z[k1];
			}
			else{
				l=k;
				while(r<n and s[r]==s[r-l]) r++;
				z[k]=(r-l);r--;
			}
		}
	}
	// for(int i=0;i<n;i++){
	// 	cout << z[i]<<" ";
	// }
	// cout <<endl;
	int mx=*max_element(z+m,z+n);
	// cout << mx <<endl;
	int index;
	for(int i=m;i<n;i++){
		if(z[i]==mx){
			index=i;
			break;
		}	
	}
	// cout <<index <<endl;
	cout << (index-m-1)<<endl;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
   	max_shift(a,b);
}
/*******************main ends here **************************/