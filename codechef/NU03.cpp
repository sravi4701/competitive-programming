#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		char ch;
		long c=0;
		for(long i=0;i<s.length();++i)
		{
			ch=s[i];
			while(ch==s[i+1] and i+1<s.length())
			{
				c++;
				i++;
			}
		}
		cout << c <<endl;

	}
}
