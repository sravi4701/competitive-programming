#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>mp;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
                int l=0,t=0,I=0,m=0,e=0;
		for(int i=0;i<s.length();++i)
		{
			if(s[i]=='L') l++;
			if(s[i]=='T') t++;
			if(s[i]=='I') I++;
			if(s[i]=='M') m++;
			if(s[i]=='E') e++;
		}
		if((l>=2 && t>=2 && I>=2 && m>=2))
		{
			if(s.length()==9 and e>=1)
			cout << "YES" <<endl;
			else if(s.length()>9 and e>=2) cout << "YES" <<endl;
			else cout << "NO" <<endl;

		}
		else {
			cout <<"NO" <<endl;
		}
	}
}
