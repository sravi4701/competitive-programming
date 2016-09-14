#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long x=100001;
ll N_of_incr_subarray(ll *arr,ll n)
{
	ll dp[n];
	dp[0]=1;
	for(ll i=1;i<=n;i++)
	{
		if(arr[i-1]<=arr[i])
		{
			dp[i]=dp[i-1]+1;
		}
		else
		{
			dp[i]=1;
		}
	}
	long long p=0;
	for(long i=0;i<n;i++)
	{
		p+=dp[i];
	}
	return p;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
        ll t,n;
        cin>>t;
        while(t--)
        {
		cin>>n;
		long long arr[x];
		long long s;
		for(long i=0;i<n;i++)
		{
			cin>>s;
			arr[i]=s;
		}
		cout << N_of_incr_subarray(arr,n) <<endl;
        }
}
