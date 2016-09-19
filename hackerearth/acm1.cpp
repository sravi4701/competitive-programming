#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
    long long t,n,w,i,a;
    cin>>t;
    while(t--)
    {
    	cin>>n>>w;
    	if(n==1)
    	{
    		cout << 0 <<endl;
    		continue;
    	}
    	long long m,p;
    	cin>>a;
    	m=a;
    	p=a;
    	for(i=1;i<n;i++)
    	{
    		cin>>a;
    		if(a>m)m=a;
    		if(a<p)p=a;
    	}

    	cout << w*(m-p) <<endl;
    }
    return 0;
}
