#include <bits/stdc++.h>
using namespace std;
int m;
char pat[10000010];
char txt[10000010];
int lps[10000001];
void lps_array(char *pat,int *lps)
{
	int len=0,i=1;
	lps[0]=0;
	while(i<m)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=len;
				i++;
			}
		}
	}
}
void KMP(char * pat,char *txt,int n)
{
	int lps[m];
	lps_array(pat,lps);
	int i=0,j=0;
	int f=1;
	while(i<n)
	{
		if(pat[j]==txt[i])
		{
			++i;
			++j;
		}
		if(j==m)
		{
			f=0;
			cout << i-j <<endl;
			j=lps[j-1];
		}
		else if(i<n && pat[j]!=txt[i])
		{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else
			{
				i++;
			}
		}
	}
	if(f) cout <<endl;

}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while(scanf("%d",&m)!=EOF)
	{
		scanf("%s",pat);
		scanf("%s",txt);
		int n=strlen(txt);
		KMP(pat,txt,n);
	}

}
