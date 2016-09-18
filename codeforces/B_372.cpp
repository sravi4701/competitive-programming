/*input
ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z
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
map<char,int>m;

/******************main starts here *************************/
int main()
{
    be_fast;
    string s;
    cin>>s;
    int n=s.length();
    int c=0,ch=0;
    cout << s[49]<<s[50]<<endl;
    cout << n <<endl;
    if(n<26){
    	cout << -1 <<endl;
    	return 0;
    }
    for(int i=0;i<26;i++){
    	if(s[i]=='?'){
    		c++;
    	}
    	else{
    		m[s[i]]+=1;
    		if(m[s[i]]==1){
    			ch++;
    		}
    	}
    }
    if((c+ch)==26){
    	for(int i=0;i<26;i++){
    		if(s[i]=='?'){
    			for(char j='A';j<='Z';j++){
    				if(m[j]==0){
    					cout << j;
    					m[j]+=1;
    					break;
    				}
    			}
    		}
    		else{
    			cout << s[i];
    		}		
    	}
    }
    else{
    	int f=1;
    	for(int i=1;i<(n-26);i++){
            cout << i <<"s[i]"<<s[i]<<"s[i+25]"<<s[i+26]<< endl;
    		if(s[i-1]=='?'){
    			c--;
    		}
    		else{
    			m[s[i]]--;
    			ch--;
    		}
    		if(s[i+26]=='?'){
    			c++;
    		}
    		else{
    			m[s[i]]++;
    		}
    		if((c+ch)==26){
    			for(int i=0;i<26;i++){
    				if(s[i]=='?'){
    					for(char j='A';j<='Z';j++){
    						if(m[i]==0){
    							cout << j;
    							m[i]+=1;
    							break;
    						}
    					}
    				}
    				else{
    					cout << s[i];
    				}		
    			}
    			f=0;
    		}
    	}
    	if(f){
    		cout << -1 <<endl;
    	}
    }
}
/*******************main ends here **************************/