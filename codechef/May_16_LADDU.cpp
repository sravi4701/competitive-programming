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
    string x="CONTEST_WON";
    string y="TOP_CONTRIBUTOR";
    string z="BUG_FOUND";
    string r="CONTEST_HOSTED";
    while(t--){
        int n;
        cin>>n;
        string in;
        cin>>in;
        ll score=0;
        string str;
        loop(i,0,n){
            cin>>str;
            int rn;
            if(str==x){
                cin>>rn;
                score+=300;
                if(rn<20){
                    score+=(20-rn);
                }
            }
            else if(str==y){
                score+=300;
            }
            else if(str==z){
                cin>>rn;
                score+=rn;
            }
            else if(str==r){
                score+=50;
            }
        }
        if(in=="INDIAN"){
            cout << score/200 <<endl;
            }

        else {
            cout << score/400 <<endl;
        }
    }



}
/*******************main ends here **************************/

