#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long arr[n];
		for(long long i=0;i<n;i++) cin>>arr[i];
		long long m=*max_element(arr,arr+n);
		long long ans=0;
		for(long long i=0;i<n;i++)
		{
			if(arr[i]<m) ans=ans+m-arr[i];
		}
		cout << ans <<endl;
	}
}
