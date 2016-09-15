#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, x,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<int,int>mp;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			mp[i]=x;
		}
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			if(mp[i]==i)
			{
				cnt++;
			}
		}
		if(cnt==n)
		cout << cnt-1 <<endl;
		else
		cout << cnt<<endl;
	}

}
