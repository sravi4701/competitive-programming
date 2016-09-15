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
	int a,b,c,d;
	int arr[4];
	loop(i,0,4){
		cin>>arr[i];
	}
	sort(arr,arr+4);
	int ans=0;
	map<vector<int>,int>used;
    
	for(int i=1;i<=arr[0];i++){
		for(int j=1;j<=arr[1];j++){
			for(int k=1;k<=arr[2];k++){
				for(int l=1;l<=arr[3];l++){
                    int x=(i^j^k^l);
                    if(x==0){
                        continue;
                    }
		            vector<int>v;
                    v.push_back(i);
                    v.push_back(j);
                    v.push_back(k);
                    v.push_back(l);
					sort(v.begin(),v.end());
					if(!used[v]){
						used[v]=1;
						ans++;
					}
				}
			}
		}
	}
	cout <<ans <<endl;    
}
/*******************main ends here **************************/
