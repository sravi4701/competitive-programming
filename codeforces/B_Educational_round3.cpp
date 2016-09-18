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
int upperbound(vector<ll>&arr,ll x){
	int lo=0;
	int hi=arr.size()-1;
	int mid;
	while(lo<hi){
		mid=lo+(hi-lo)/2;
		if(arr[mid]>x){
			hi=mid;
		}
		else{
			lo=mid+1;
		}
	}
	if(arr[lo]<=x){
		return lo+1;
	}
	return lo;
}
/******************main starts here *************************/
int main()
{
    be_fast;
	int n,m;
	cin>>n>>m;
	std::vector<ll>A(n);
	std::vector<ll>B(m);
	loop(i,0,n) cin>>A[i];
	loop(i,0,m) cin>>B[i];
	sort(all(A));
	loop(i,0,m){
		cout << upperbound(A,B[i]) <<" ";
	}
	/*
	loop(i,0,m){
		cout << (upper_bound(all(A),B[i])-A.begin()) <<" ";
	}
	*/
}
/*******************main ends here **************************/
