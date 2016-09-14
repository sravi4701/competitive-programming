#include<bits/stdc++.h>
using namespace std;
int pal(long long n)
{
	stringstream ss;
	string s;
	ss<<n;
	ss>>s;
	int p=s.length();
	int f=1;
	for(int i=0,j=p-1;i<=p/2;i++,p--)
	{
		if(s[i]!=s[j])
		{
			f=0;
			break;
		}
	}
	ss.clear();
	return f;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie();
	long long a,b,t;
	cin>>t;
	while(t--)
	{
		long long cnt=0;
		cin>>a>>b;
		for(long long i=a;i<=b;i++)
		{
			if(pal(i))
			{
				cnt+=i;
			}
		}
		cout << cnt <<endl;

	}
}
