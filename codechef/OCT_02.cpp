#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int c=0;
		long long n;
		cin>>n;
		long long wait[n+1];
		string ans,chefans;
		cin>>ans>>chefans;
		for(int i=0;i<n+1;i++) cin>>wait[i];
		long long k=0;
		for(int i=0;i<ans.length();i++)
		{
			if(ans[i]==chefans[i])
			{
                                c++;
			}
		}
		if(c==n)
		cout << wait[c] <<endl;
		else
		cout << *max_element(wait,wait+c+1) <<endl;
	}
}
