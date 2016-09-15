#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		map<string,int>mp;
		for(int i=0;i<n;++i)
		{
			string sub="";
			for(int j=i;j<n;++j)
			{
				sub+=s[j];
				sort(sub.begin(),sub.end());
				mp[sub]++;
			}
		}
		int res=0;
		for(map<string,int>::iterator it =mp.begin();it!=mp.end();++it)
		{
			int x=it->second;
			res=res+x*(x-1)/2;
		}
		cout<<res <<endl;

	}
}
