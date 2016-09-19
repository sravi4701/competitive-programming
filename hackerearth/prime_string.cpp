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
const int limit= 1000000;
bool marked[1000001]={0};
void prime(){
	marked[0]=marked[1]=1;
	for(int i=2;i*i<=limit;i++){
		if(!marked[i]){
			for(int j=i*i;j<=limit;j+=i){
				marked[j]=1;
			}
		}
	}
}
/******************main starts here *************************/
int main()
{
    be_fast;
    prime();
    int t;
    cin>>t;

    while(t--){
    	string s;
    	cin>>s;
    	map<char,int>cnt;
    	for(int i=0;i<s.length();i++){
    		cnt[s[i]]++;
    	}
    	int f=1;
    	//cout << cnt.size()<<endl;
    	//cout << marked[cnt.size()]<<endl;
    	if(marked[cnt.size()]){
    		f=0;
    	}
    	else{
    		for(auto i:cnt){
    			//cout << i.second <<endl;
    			//cout << marked[i.second]<<endl;
    			if(marked[i.second]){
    				f=0;
    			}
    		}
    	}
    	cout << (f?"YES":"NO") <<endl;
    }
       
}
/*******************main ends here **************************/
