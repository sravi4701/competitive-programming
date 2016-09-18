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
int index_min(vector<int>&v){
    int idx=0;
    int m=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]<m){
            idx=i;
            m=v[i];
        }
    }
    return idx;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int n,k;
    cin>>n>>k;
    vector<int>v1(n);
    vector<int>v2(n);
    loop(i,0,n){
        cin>>v1[i];
    }
    loop(i,0,n){
        cin>>v2[i];
    }
    vector<int>v3(n);
    for(int i=0;i<n;i++){
        v3[i]=v2[i]/v1[i];
        v2[i]=v2[i]%v1[i];
    }
    int i;
    while(k>0){
        i=index_min(v3);
        if((k+v2[i])<v1[i]){
            break;
        }
        else{
            v3[i]+=(v2[i]+k)/v1[i];
            k=(v2[i]+k)%v1[i];
        }
    }
    cout << v3[index_min(v3)] <<endl;


}
/*******************main ends here **************************/

