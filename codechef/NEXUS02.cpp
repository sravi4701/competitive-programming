#include<bits/stdc++.h>
using namespace std;
char arr[10000];
void solve(string & s)
{
	int k;
        cin>>k;
        string p="";
        for(int i=0;i<s.length();i++)
        {
		p.append(1,(s[i]-k));
        }
        cout << p <<endl;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		getline(cin,s);
		solve(s);
	}
}
