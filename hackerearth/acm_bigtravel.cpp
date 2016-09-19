#include<bits/stdc++.h>
using namespace std;
const long long md=1000000007;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
        long long a,b,t;
        cin>>t;
        map<long long ,pair<long long ,long long> >mp;
	for(long long i=0;i<t;i++)
	{
		cin>>a>>b;
		mp[i]={a,b};
	}
        long long s=0;

        for(long long i=0;i<t-1;i++)
        {
                for(long long j=i+1;j<t;j++)
                {
			s=s+abs(mp[i].first - mp[j].first)+abs(mp[i].second-mp[j].second);
                }
        }
        cout << s%md <<endl;

}
