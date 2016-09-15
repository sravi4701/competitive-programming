#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a,b;
		map<int,int> mp;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++)
		{
			cin>>a>>b;
			mp[a]=b;
		}
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				if(arr[i]!=1 and arr[i+1]!=1)
				{
					c++;
					arr[i+1]=1;
				}
			}
			else if(i==n-1)
			{
				if(arr[i]!=1 and arr[i-1]!=1)
				{
					c++;
					arr[i-1]=1;

				}
			}
			else
			{
				if(arr[i]!=1 and (arr[i+1]!=1 and arr[i-1]!=1))
				{
					arr[i+1]=1;

					c++;
				}
			}
		}
		cout << c <<endl;
	}
}
