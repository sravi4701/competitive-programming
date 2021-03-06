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
int magic_box(int arr[],int n){
	int c=0;
	bool visited[n];
	for(int i=0;i<n;i++){
		// cout << "checking for "<<i <<endl;
		memset(visited,false,sizeof(visited));
		int j=i;
		visited[j]=true;
		int prev;

		while(true){
			int prev=j;
			// cout << "prev= "<<prev<<endl;
			j=(j+arr[j]+1)%n;
			// cout << "j= "<<j <<endl;
			if(j==i){
				// cout << "j==i"<<j<<" " <<i<<endl;
				c++;
				break;
			}
			if(visited[j]){
				// cout << "break"<<endl;
				break;
			}
			else{
				visited[j]=true;
			}
		}
	}
	return c;
}
/******************main starts here *************************/
int main()
{
    be_fast;
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		int arr[n];
   		for(int i=0;i<n;i++){
   			cin>>arr[i];
   		}
   		cout << magic_box(arr,n)<<endl;;
   	}
}
/*******************main ends here **************************/