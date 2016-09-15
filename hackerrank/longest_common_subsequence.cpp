#include<bits/stdc++.h>
using namespace std;
void lcs(int *X,int *Y , int m, int n)
{
	int L[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 or j==0) L[i][j]=0;
			else if(X[i-1]==Y[j-1])
			{
				L[i][j]=L[i-1][j-1]+1;
			}
			else
			L[i][j]= max(L[i-1][j],L[i][j-1]);
		}
	}
	int l=L[m][n];
	int lc[l+1];
	int index=l;
	int i=m;
	int j=n;
	while(i>0 && j>0)
	{
		if(X[i-1]==Y[j-1])
		{
			lc[l-1]=X[i-1];
			i--;
			j--;
			l--;
		}
		else if(L[i-1][j]>L[i][j-1])
		{
			i--;
		}
		else
		j--;
	}
	for(int i=0;i<index;i++)
	{
		cout << lc[i] <<" " ;
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	int X[m];
	int Y[n];
	for(int i=0;i<m;i++)
	{
		cin>>X[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>Y[j];
	}
	lcs(X,Y,m,n);
}
