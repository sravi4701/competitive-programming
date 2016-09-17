#include <bits/stdc++.h>
using namespace std;
void lps(string &X,string &Y, int m,int n)
{
	int **L= new int*[m+1];
	for(int i=0;i<m+1;i++)
		L[i]=new int[n+1];

	for(int i=0;i<=m;++i)
	{
		for(int j=0;j<=n;++j)
		{
			if(i==0 || j==0)
			L[i][j]=0;
			else if(X[i-1]==Y[j-1])
			L[i][j]=L[i-1][j-1]+1;
			else
			L[i][j] = max(L[i-1][j],L[i][j-1]);
		}
	}
	cout << L[m][n] <<endl;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int m=s1.length();
	int n=s2.length();
	lps(s1,s2,m,n);

}
