#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
                cin>>arr[i];
                arr[i]=arr[i]*arr[i];
        }
        ll s=0;
        for(ll i=0;i<k;i++)
        {
                ll x,y;
                cin>>x>>y;
                x=x*x;
                y=y*y;
                if((x+y)>arr[0]) continue;
                for(ll j=n-1;j>=0;j--)
                {
                        if((x+y)<=arr[j])
                        {
                                s+=j+1;
                                break;
                        }
                }
	}
	cout << s <<endl;
}
