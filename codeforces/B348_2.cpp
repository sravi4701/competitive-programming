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
bool solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int d[n];
    loop(i,0,n)cin>>d[i];
    bool visited[n];
    memset(visited,false,sizeof(visited));
    int i=0;
    while(true){
        if(i>=n or i<0){
            return true;
        }
        if(visited[i]) return false;
        else visited[i]=true;
        s[i]=='>'?i+=d[i]:i-=d[i];
    }
}

/******************main starts here *************************/
int main()
{
    be_fast;
    input_fast;
    print (solve()?"FINITE":"INFINITE") <<endl;
}
/*******************main ends here **************************/
