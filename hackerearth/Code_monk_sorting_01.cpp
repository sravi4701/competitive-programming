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
const int mx=100001;
const int max1=1000001;
int arr[mx],duplicate[mx],frequency[max1],copied[mx];
void merge(int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=0;
    int c=0;
    for(int p=left;p<=right;p++){
        if(i>mid){
            duplicate[k++]=arr[j++];
        }
        else if(j>right){
            frequency[arr[i]]+=c;
            duplicate[k++]=arr[i++];
        }
        else if(arr[i]<=arr[j]){
            frequency[arr[i]]+=c;
            duplicate[k++]=arr[i++];
        }
        else{
            duplicate[k++]=arr[j++];
            c++;
        }
    }
    k=0;
    for(int i=left;i<=right;i++){
        arr[i]=duplicate[k++];
    }
}
void merge_sort(int left,int right){
    if(right>left){
        int mid=(left+right)/2;
        merge_sort(left,mid);
        merge_sort(mid+1,right);
        merge(left,mid,right);
    }
}
/******************main starts here *************************/
int main()
{
    be_fast;
    ict{
    	int n;
    	cin>>n;
    	loop(i,0,n){
    		cin>>arr[i];
            copied[i]=arr[i];
    	}
        for(int i=0;i<max1;i++){
            frequency[i]=0;
        }
        merge_sort(0,n-1);
        for(int i=0;i<n;i++){
            cout << frequency[copied[i]]<<" ";
        }
        cout <<endl;
    }
}
/*******************main ends here **************************/