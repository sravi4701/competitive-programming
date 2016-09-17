/*input
1
5
aabaa
*/
#include <bits/stdc++.h>
using namespace std;
vector<int>lps(1000000);

void lps_array(string &s,int m)
{
        int i=0,len=0;
        lps[i]=0;
        i++;
        while(i<m)
        {
		if(s[i]==s[len])
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
				lps[i]=0;
				i++;
			}

		}
        }
}
int main()
{
	int t;
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		cin>>n;
		cin.clear();
		string pat;
		cin>>pat;
		cin.clear();
		cout << "Test case #"<<i <<endl;
		lps_array(pat,n);
		for(int i=0;i<n;i++){
			cout << lps[i]<<" ";
		}
		cout <<endl;
		for(int j=0;j<n;j++)
		{
			if(lps[j]>0 && (j+1)%(j+1-lps[j])==0 )
			{
				cout << j+1 << " " << (j+1)/(j+1-lps[j]) <<endl;
			}
		}
	}
}
