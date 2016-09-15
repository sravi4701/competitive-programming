#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
		int n;
		cin>>n;
                map<int,int>mp;
                int x;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			mp[i]=x;
		}
		int cnt=0;
		for(int i=1;i<n;i++)
		{
			if(mp[i]==1 or mp[i+1]==1)
			{
                                if(mp[i+1]==1)
                                {
                                        i++;
                                }
			}
			else
			{
				mp[i+1]=1;

				cnt++;
			}
		}
		cout << cnt <<endl;
        }
}
