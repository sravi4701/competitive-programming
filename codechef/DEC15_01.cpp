#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n1,n2,m;
        cin>>t;
        while(t--)
        {
                cin>>n1>>n2>>m;
                ll sum=m*(m+1)/2;
                ll res;
                if(sum<=n1 and sum<=n2)
                {
			res=(n1-sum)+(n2-sum);
                }

                else
                {
                        res=max(n1,n2)-min(n1,n2);
                }
                cout << res <<endl;
        }
}
