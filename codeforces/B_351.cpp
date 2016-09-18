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
int x[10000001]={0};
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> >arr(m);
    loop(i,0,m){
        cin>>arr[i].first;
        cin>>arr[i].second;
        };
    priority_queue<int>p1;
    priority_queue<int>p2;
    if(arr[0].first>arr[0].second){
            p1.push(arr[0].first);
            x[arr[0].first]=1;
        }
        else{
            p2.push(arr[0].second);
            x[arr[0].second]=2;
        }
    int ans=0;
    loop(i,1,m){
        if(arr[i].first>arr[i].second){
            if(arr[i].first>p2.top()){
                p1.push(arr[i].first);
                x[arr[i].first]=1;
            }
            else{
                ans=0;
                break;
            }
            if(arr[i].second < p1.top()){
                p2.push(arr[i].second);
                x[arr[i].second]=2;
            }
            else{
                ans=0;
                break;
            }
        }
    }
    loop(i,0,n){
        if(x[i]==0){
            if(i>p2.top()){
                ans+=1;
            }
            if(i<p1.top()){
                ans+=1;
            }
        }
    }
    cout << ans <<endl;
}
/*******************main ends here **************************/

