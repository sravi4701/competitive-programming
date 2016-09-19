#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin>>n;
	set<long long >a;
	int i=3;
	for(long long j=1;3*j<n;j++)
	a.insert(3*j);
	for(long long j=1;5*j<n;j++)
	a.insert(5*j);
	cout << accumulate(a.begin(),a.end(),0);

}
