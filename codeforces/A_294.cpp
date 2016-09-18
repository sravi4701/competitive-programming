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
	vector<string>arr;
	string s;
	loop(i,0,8){
		cin>>s;
		arr.push_back(s);
	}
	ll a=0,b=0;
	loop(i,0,8){
		loop(j,0,8){
			if(arr[i][j]=='Q'){
				a+=9;
			}
			else if(arr[i][j]=='R'){
				a+=5;
			}
			else if(arr[i][j]=='B' or arr[i][j]=='N'){
				a+=3;
			}
			else if(arr[i][j]=='P'){
				a+=1;
			}
			else if(arr[i][j]=='q'){
				b+=9;
			}
			else if(arr[i][j]=='r'){
				b+=5;
			}
			else if(arr[i][j]=='b' or arr[i][j]=='n'){
				b+=3;
			}
			else if(arr[i][j]=='p'){
				b+=1;
			}
		}
	}
	if(a>b){
		print "White";
	}
	else if(a<b){
		print "Black";
	}
	else{
		print "Draw";
	}
	
}
/*******************main ends here **************************/
