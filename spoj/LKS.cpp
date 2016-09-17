#include<bits/stdc++.h>
using namespace std;
#define x 501
#define y 2000001
long long val[x];
long long wt[x];
long long dp[y];
long long N,W;
long long solve()
{
    memset(dp, 0, sizeof(dp));
    for(long long i =1; i <= N; i++) {
        for(long long j = W; j >= 0; j--) {
            dp[j] = (wt[i] > j) ? dp[j]: max(dp[j], dp[j-wt[i]] + val[i]);
        }
    }
    return dp[W];
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>W>>N;
	for(long long i=0;i<N;i++)
	{
		cin>>val[i];
		cin>>wt[i];
	}
	cout << solve() <<endl;

}
