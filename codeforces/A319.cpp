#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long n,x,i,j,c=0;
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{

			if((i+1)*(j+1)==x)
			{
				c++;
			}
		}
	}
	cout << c;
}
