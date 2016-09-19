//https://www.hackerearth.com/code-monk-searching/algorithm/the-old-monk///__author__= "Ravi Shankar"

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
        int n;
        cin>>n;
        vector<ll>A(n);
        vector<ll>B(n);
        loop(i,0,n){
            cin>>A[i];
        }
        loop(i,0,n){
            cin>>B[i];
        }
        ll mx=0;
        loop(i,0,n){
            int low=i;
            int high=n-1;
            int x=low;
            while(low<high){
                ll mid=low+(high-low+1)/2;
                if(B[mid]<A[i]){
                    high=mid-1;
                }
                else{

                    low=mid;
                    x=low;
                }
            }
            if(B[x]>=A[i]){
                if((x-i)>mx){
                    mx=x-i;
                }
            }
        }
        cout << mx <<endl;
    }
}
/*******************main ends here **************************/
