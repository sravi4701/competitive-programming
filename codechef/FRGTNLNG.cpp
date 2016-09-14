#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s[n];
		map<string,bool>mp;
		for(int i=0;i<n;i++) cin>>s[i];
                for(int i=0;i<m;i++)
                {
			int p;
			cin>>p;
			for(int i=0;i<p;i++)
			{
				string s2;
				cin>>s2;
				mp[s2]=true;
			}
                }
                for(int i=0;i<n;i++)
                {
                        if(mp.find(s[i])!=mp.end()) cout << "YES" << " ";
                        else cout << "NO" <<" ";
                }
                cout <<endl;
	}
}
