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
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	ll s1=0,s2=0,s3=0;
	int arr1[n1],arr2[n2],arr3[n3];
	loop(i,0,n1){
		cin>>arr1[i];
		s1+=arr1[i];
	}       
	loop(i,0,n2){
		cin>>arr2[i];
		s2+=arr2[i];
	}
	loop(i,0,n3){
		cin>>arr3[i];
		s3+=arr3[i];
	}
	int i=0,j=0,k=0;
	ll ans=min(s1,min(s2,s3));
	while(i<n1 && j<n2 && k<n3){
		if((s1==0 or s2==0 or s3==0) or (s1==s2 && s2==s3)){
			break;
		}
		if(s1>ans){
			s1-=arr1[i];
			i++;			
		}
		if(s2>ans){
			s2-=arr2[j];
			j++;
		}
		if(s3>ans){
			s3-=arr3[k];
			k++;
		}
		ans=min(s1,min(s2,s3));
	}
	cout << ans <<endl;
}
/*******************main ends here **************************/
