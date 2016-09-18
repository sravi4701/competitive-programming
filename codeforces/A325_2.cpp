#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int res=count(arr,arr+n,1);
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]==0 and (arr[i-1]==1 and arr[i+1]==1))
		{
			res+=1;
		}
	}
	cout << res <<endl;
}
