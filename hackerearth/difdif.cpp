#include<bits/stdc++.h>
using namespace std;
int main()
{

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int l=s.length();
        set<string>st;
        for(int i=0;i<l;i++)
        {
		for(int j=1;i+j<=l;j++)
		{
			st.insert(s.substr(i,j));
		}
        }
	cout << st.size() <<endl;
	}
}
