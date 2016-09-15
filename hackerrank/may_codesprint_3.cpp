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
		int n,k;
		cin>>n>>k;
		bool used[n+1];
		memset(used,0,sizeof(used));
		vector<int>v;
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(((i-k)>=1 and (i-k)<=n) or ((i+k)>=1 and (i+k)<=n)){
                if(((i-k)>=1 and (i-k)<=n) and ((i+k)>=1 and (i+k)<=n)){
                    if(!used[(i-k)]){
                        v.push_back((i-k));
                        used[i-k]=1;
                    }
                    else if(!used[(i+k)]){
                        v.push_back((i+k));
                        used[i+k]=1;
                    }
                    else{
                        flag=true;
                        break;
                    }
                }
				else if(((i-k)>=1 and (i-k)<=n)){
                    if(!used[(i-k)]){
					   v.push_back(i-k);
                       used[(i-k)]=1;
                    }
                    else{
                        flag=true;
                        break;
                    }
				}
				else if((i+k)>=1 and (i+k)<=n){
                    if(!used[(i+k)]){
                        v.push_back(i+k);
                        used[(i+k)]=1;
                    }
                    else{
                        flag=true;
                        break;
                    }
				}
			}
			else{
				flag=true;
				break;
			}
		}
		if(flag){
			cout << -1 <<endl;
		}
		else{
			loop(i,0,v.size()){
				cout << v[i] <<" ";
			}
			cout <<endl;
		}
	}    
}
/*******************main ends here **************************/
