#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll primeFactors(ll n)
{
    map<ll,ll>mp;
    while (n%2 == 0)
    {
        mp[2]=mp[2]+1;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            mp[i]=mp[i]+1;
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]=mp[n]+1;

    map<ll,ll>::iterator itr;
    //for(itr=mp.begin();itr!=mp.end();++itr) cout << itr->first << "->" << itr->second <<endl;
    ll f=1;
    for(itr=mp.begin(); itr!=mp.end(); ++itr)
    {
        ll a,b,p;
        a=itr->first;
        b=itr->second;
        p= pow(a,b+1);
        f=f*((p-1)/(itr->first-1));
    }
    return f;

}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q;
    cin>>n>>q;
    for(ll i=0; i<q; ++i)
    {
        ll x;
        cin>>x;
        n=n*x;
        cout << primeFactors(n) <<endl;
    }
    return 0;
}
