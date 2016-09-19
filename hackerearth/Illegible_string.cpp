#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin>>n;
	string s;
	cin>>s;
	s.replace(s.find("w"), sizeof("w")-1, "vv");
	int mx=s.length();
	s.replace(s.find("vv"), sizeof("vv")-1, "w");
	int mn=s.length();
	cout << mn << " " <<mx <<endl;
}
