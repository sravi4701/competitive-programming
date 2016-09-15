#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		int ans=0;
		set<int>s(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			if(s.find(v[i]-1)==s.end())
			{
				int j=v[i];
				while(s.find(j)!=s.end())
				{
					j++;
				}
				ans=max(ans,j-v[i]);
			}
		}
		cout << ans <<endl;
	}
}
