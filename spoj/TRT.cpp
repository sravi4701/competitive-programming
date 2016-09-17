#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[2000][2000];
ll p[2001];
ll n;
ll greatest_value(int year,int be,int en)
{
    if(be>en) return 0;
    if(dp[be][en]!=-1) return dp[be][en] ;
    return dp[be][en]=max(greatest_value(year+1,be+1,en)+year*p[be],
                          greatest_value(year+1,be,en-1)+year*p[en]);
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dp[i][j]=-1;
        }
    }

    cout << greatest_value(1,0,n-1) <<endl;
}
