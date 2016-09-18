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
    int n;
	cin>>n;
	string ans="NO";
	if(n%1234567==0||n%123456==0||n%1234==0)
	{
		ans="YES";
	}
	else
	{
		bool istrue=0;
		loopn(a,0,n/1234567)
		{
			loopn(b,0,(n-a*1234567)/123456)
			{
				loopn(c,0,(n-a*1234567-b*123456)/1234)
				{
					if(a*1234567+b*123456+c*1234==n)
					{
						ans="YES";
						istrue=1;
						break;
					}
				}
				if(istrue)break;
			}
			if(istrue)break;
		}
	}
	cout<<ans;
}
/*******************main ends here **************************/
