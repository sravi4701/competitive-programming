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
    int n,k;
    cin>>n>>k;
	string s;
	cin>>s;
	int i=(n/2-1),j;
    if(n&1){
        j=(n/2+1);
    }
    else{
        j=n/2;
    }
    bool used[n+1];
    memset(used,0,sizeof(used));
    bool flag=false;
    while(i>=0 && j<n){
        if(s[i]!=s[j] && k<=0){
            flag=true;
        }
 	    else if(s[i]!=s[j] && k>0){
            if(s[i]>s[j]){
                s[j]=s[i];
                used[j]=1;
                k--;
            }
            else if(s[j]>s[i]){
                s[i]=s[j];
                used[i]=1;
                k--;
            }
        }
        i--;j++;
    }
	if(k>0){
		i=0;
		j=n-1;
		while(i<=(n/2-1)){
			if(used[i] && used[j]){
				if(s[i]!='9' && s[j]!='9'){
					s[i]='9';
					s[j]='9';
				}
			}
			else if(used[i] or used[j]){
				if((s[i]!='9' or s[j]!='9')&&k>=1){
					s[i]='9';
					s[j]='9';
					k--;
				}
			}
			else if(used[i]==0 && used[j]==0){
				if(s[i]!='9'&&s[j]!='9' && k>=2){
					s[i]='9';
					s[j]='9';
					k-=2;
				}
			}
			i++;
			j--;
		}
		if(n&1 && k>=1){
			s[n/2]='9';
		}
	}
	if(flag==true){
		cout << -1 <<endl;
	}
	else{
		cout << s <<endl;
	}
}
/*******************main ends here **************************/
