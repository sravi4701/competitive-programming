#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	int t;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		getline(cin,s);
		string p;
		getline(cin,p);
		string ::iterator itr=search(s.begin(),s.end(),p.begin(),p.end());
		if(itr!=s.end())
		{
			cout << "Y" <<endl;
		}
		else
		cout << "N" <<endl;
	}
}
