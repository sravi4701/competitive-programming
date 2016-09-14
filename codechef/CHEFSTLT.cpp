///chef and two strings
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int c=0,d=0;
                for(int i=0;i<s1.length();++i)
                {
                        if(s1[i]!=s2[i] and (s1[i]!='?' and s2[i]!='?'))
                        c++;
                        if(s1[i]==s2[i] and (s1[i]!='?' and s2[i]!='?'))
                        d++;
                }
                cout << c << " "<< s1.length()-d <<endl;
	}
}
