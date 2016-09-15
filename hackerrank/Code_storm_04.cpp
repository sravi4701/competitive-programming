#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ll t;
        cin>>t;
        while(t--)
        {
                ll n;
                cin>>n;
                deque<ll>v;
                for(int i=1;i<=n;i++)
                {
                        v.push_back(i);
                }
                while(v.size()!=1)
                {
                        deque<ll>::iterator i=v.begin();
                        if(n&1)
                        {
                                v.erase(i);
                                n--;
                        }
                        else
                        {
                                v.erase(i+n/2);
                                ll x=*v.begin();
                                v.erase(v.begin());
                                v.push_back(x);
                                n--;
                        }
                }
                cout << *v.begin() <<endl;
        }
}
