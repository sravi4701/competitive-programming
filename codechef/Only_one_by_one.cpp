#include<bits/stdc++.h>
using namespace std;
int c=0;
bool repetition(char &a,char &b)
{
	if(a==b)
	{
		c++;
		return true;
	}
	else return false;
}
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
	unique(s.begin(),s.end(),repetition);
	cout << c <<endl;
	c=0;
	}

}
