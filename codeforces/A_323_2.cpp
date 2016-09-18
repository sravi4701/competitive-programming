#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin>>n;
	map<long long,bool>A;
	map<long long,bool>B;
	for(int i=1;i<=n;i++)
	{
		A[i]=false;
		B[i]=false;
	}
	long long a,b;
	for(long long i=0;i<n*n;i++)
	{
                cin>>a>>b;
                if(A[a]==false && B[b]==false)
                {
			cout << i+1 <<endl;
			A[a]=true;
			B[b]=true;
                }

	}
}
