#include<bits/stdc++.h>
using namespace std;
int arr[101][101];
int dp[101][101];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cin>>arr[i][j];
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        dp[n-1][i]=arr[n-1][i];
        res=max(res,dp[n-1][i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            dp[i][j]=max(dp[i+1][j]+arr[i][j],dp[i+1][j+1]+arr[i][j]);
            res=max(res,dp[i][j]);
        }
    }
    cout << res <<endl;
    }
}
