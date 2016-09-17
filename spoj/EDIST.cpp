#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c)
        {
        return min(min(a,b),c);
}
int editdistance(string X,string Y)
        {
        int m=X.size(),n=Y.size();
        vector< vector<int> > dp(m+1,vector<int>(n+1));
        for(int i=0;i<=m;++i)
                {
                for(int j=0;j<=n;++j)
                        {
                        if(i==0) dp[i][j]=j;
                        else if(j==0) dp[i][j]=i;
                        else if(X[i-1]==Y[j-1]) dp[i][j]=dp[i-1][j-1];
                        else dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
                }
        }
        return dp[m][n];
}
int main()
        {
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
                {
                string x,y;
                cin>>x>>y;
                cout << editdistance(x,y) <<endl;
        }

}
