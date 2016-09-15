#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];

	ll r=0,act=0,obt=0;

	for(int i=0;i<n;i++) cin>>arr[i];

        for(int i=0;i<n-2;i++)
        {
		ll a=arr[i]*arr[i];
		for(int j=i+1;j<n-1;j++)
		{
			ll b=arr[j]*arr[j];
			for(int k=j+1;k<n;k++)
			{
				ll c=arr[k]*arr[k];
				if(arr[i]+arr[j] > arr[k])
				{
					if(a+b==c)
					{
						r++;
					}
					if(c<(a+b))
					{
						act++;
					}
					if(c>(a+b))
					{
						obt++;
					}
				}
			}
		}
        }
        cout << act << " " << r << " "<< obt<<endl;
}
