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
    int n;
    cin>>n;
    vector<int>arr(n);
    loop(i,0,n)
    {
        cin>>arr[i];
    }
    int ans=0;
    if(arr[0]>15){
        cout << 15 <<endl;
    }
    else{
        int f=0;
        loop(i,1,n){
            if((arr[i]-arr[i-1])>15){
                cout << arr[i-1]+15 <<endl;
                return 0;
            }
        }
        if(arr[n-1]<75){
            cout << arr[n-1]+15 <<endl;
        }
        else {
            cout << 90 <<endl;
        }
    }
}
/*******************main ends here **************************/
