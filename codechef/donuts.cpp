#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector<int>vec(m);
		for(int i=0;i<m;i++)
		{
			cin>>vec[i];
		}
		sort(vec.begin(),vec.end());
		int cnt=0;
		int l=m-1;
		int res=0;
		int i=0;
		while(cnt<=n)
		{
			res++;
			if(vec[i]!=0)
			{
				vec[i]--;
				cnt++;
				cnt=cnt+vec[l]+vec[i];
				l--;
			}
			if(vec[i]==0)
			{
				i++;
			}
		}
		cout << res <<endl;

	}

}
