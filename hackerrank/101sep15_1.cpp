#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2;
	cin>>s1>>s2;
	size_t a,b,c,d;
	a=count(s1.begin(),s1.end(),'0');
	b=count(s2.begin(),s2.end(),'0');
	c=count(s1.begin(),s1.end(),'1');
	d=count(s2.begin(),s2.end(),'1');
	if(s1.length()!=s2.length() or a!=b or c!=d )
	{
		cout << -1 <<endl;
	}
	else
	{
		int cnt=0;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i])
			{
				cnt++;
			}
		}
		cout << cnt/2 <<endl;
	}

}
