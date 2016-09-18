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
#define be_fast std::ios::sync_with_stdio(false)
#define input_fast std::cin.tie(NULL)
#define print cout <<
#define loop(a,b,c)   for (int (a)=(b); (a)<(c); (a)++)
#define loopn(a,b,c)  for (int (a)=(b); (a)<=(c); (a)++)
#define loopd(a,b,c)  for (int (a)=(b); (a)>=(c); (a)--)
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
    input_fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    	multiset<long long>ans;
    	string s;
    	cin>>s;
    	int len=s.length();
    	vector<int>c(27,0);
    	for(int j=0;j<len;j++){
    		c[s[j]-'A']++;
    	}
    	while(len>0){
    		if(c['Z'-'A']>=1 && c['E'-'A']>=1 && c['R'-'A']>=1 && c['O'-'A']>=1){
    			len=len-4;
    			c['Z'-'A']--; c['E'-'A']--; c['R'-'A']--; c['O'-'A']--;
    			ans.insert(0);
    		}
    		else if(c['O'-'A']>=1 && c['N'-'A']>=1 && c['E'-'A']>=1){
    			len=len-3;
    			c['O'-'A']--; c['N'-'A']--; c['E'-'A']--;
    			ans.insert(1);
    		}
    		else if(c['T'-'A']>=1 && c['W'-'A']>=1 && c['O'-'A']>=1){
    			len=len-3;
    			c['T'-'A']--; c['W'-'A']--; c['O'-'A']--;
    			ans.insert(2);
    		}
    		else if(c['T'-'A']>=1 && c['H'-'A']>=1 && c['R'-'A']>=1 && c['E'-'A']>=2){
    			len=len-5;
    			c['T'-'A']--; c['H'-'A']--; c['R'-'A']--; c['E'-'A']-=2;
    			ans.insert(3);
    		}
    		else if(c['F'-'A']>=1 && c['O'-'A']>=1 && c['U'-'A']>=1 && c['R'-'A']>=1){
    			len=len-4;
    			c['F'-'A']--; c['O'-'A']--; c['U'-'A']--; c['R'-'A']--;
    			ans.insert(4);
    		}
    		else if(c['F'-'A']>=1 && c['I'-'A']>=1 && c['V'-'A']>=1 && c['E'-'A']>=1){
    			len=len-4;
    			c['F'-'A']--; c['I'-'A']--; c['V'-'A']--; c['E'-'A']--;
    			ans.insert(5);
    		}
    		else if(c['S'-'A']>=1 && c['I'-'A']>=1 && c['X'-'A']>=1){
    			len=len-3;
    			c['S'-'A']--; c['I'-'A']--; c['X'-'A']--;
    			ans.insert(6);
    		}
    		else if(c['S'-'A']>=1 && c['E'-'A']>=2 && c['V'-'A']>=1 && c['N'-'A']>=1){
    			len=len-5;
    			c['S'-'A']--; c['E'-'A']-=2; c['V'-'A']--; c['N'-'A']--;
    			ans.insert(7);
    		}
    		else if(c['E'-'A']>=1 && c['I'-'A']>=1 && c['G'-'A']>=1 && c['H'-'A']>=1 && c['T'-'A']>=1){
    			len=len-5;
    			c['E'-'A']--; c['I'-'A']--; c['G'-'A']--; c['H'-'A']--; c['T'-'A']--;
    			ans.insert(8);
    		}
    		else if(c['N'-'A']>=2 && c['I'-'A']>=1 & c['E'-'A']>=1){
    			len=len-4;
    			c['N'-'A']-=2; c['I'-'A']--; c['E'-'A']--;
    			ans.insert(9);
    		}
    	}
    	cout << "Case #"<<i<<": ";
    	for(multiset<long long>::iterator it=ans.begin();it!=ans.end();++it){
    		cout << *it;
    	}
    	cout <<endl;
    }
}
/*******************main ends here **************************/

