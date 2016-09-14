#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0;
		int sum=0,c1=0,c2=0;
		for(int i=0;i<s.length();i++)
		{
			c++;
			if(s[i]=='M') c1++;
			if(s[i]=='L') c2++;
			if(c==6)
			{
				sum+=c1*3+c2*4;
				c=0;
				c2=0;
				c1=0;
				i++;
			}
		}
		sum+=c1*3+c2*4;
		cout << sum <<endl;
	}
}
