#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);

long long a;
vector<int> v;
for(int i=0;i<10;i++)
{
	cin>>a;
	v.push_back(a);
}

sort(v.rbegin(),v.rend());

cout<<v[0]+v[2]+v[4]<<"\n";

	return 0;
}
