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
string x[1000005];
int a,b,c,d,e,i,j,y[1000005],mini,f;
 
int main()
{
	be_fast;
	multiset<int> mset;
	priority_queue<int> pq;
	map <int,int> mp;
	cin >> a;
	b = 0;
	mini = 1000000000;
	e = 0;
	for (i=1;i<=a;i++)	
	{
		string dum;
		cin >> dum;
		if (dum == "insert")
		{
			cin >> c;
			pq.push(-1*c);
			b++;
			e++;
			x[b] = dum;
			y[b] = c;
			mp[c]++;
			mini = min(mini,c);
		}
		else if (dum =="getMin")
		{
			bool ok = false;
			cin >> c;
			d = 0;	
			while(!pq.empty())
			{
				f = pq.top() * -1;
				if (f == c)
				{
					ok = true;
					break;
				}
				else if (f > c) 
				{
					break;
				}
				else
				{
					d++;
					pq.pop();
				}
 
			}
			e -= d;
			for (j=1;j<=d;j++)
			{
				b++;
				x[b] = "removeMin";
			}
			if (!ok )
			{
				b++;
				e++;
				x[b] = "insert";
				y[b] = c;
				mp[c]++;
				pq.push(-1*c);
			}
			b++;
			x[b] = "getMin";
			y[b] = c;
		}
		else
		{
			if (pq.empty())
			{
				b++;
				e = 1;
				x[b] = "insert";
				y[b] = 1;
				mp[1]++;
				pq.push(-1);
 
			}
			b++;
			pq.pop();
			x[b] = "removeMin";
		}
	}
	cout << b << "\n";
	for (i=1;i<=b;i++)
	{
		cout <<x[i];
		if (x[i] != "removeMin")
		{
			cout << " " << y[i] ;
		}
		cout << "\n";
	}
}
/*******************main ends here **************************/
