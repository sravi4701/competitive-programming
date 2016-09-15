#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
        long long n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int arr[n];
        for (int i=0;i<n;i++)
        {
                arr[i]=i;
        }
        long long cnt=0;
        do
        {
		int f=0;
                for(int i=0;i<n-1;i++)
                {
                        if(s[i]=='G' and arr[i]>arr[i+1])
                        continue;
                        if(s[i]=='L' and arr[i]<arr[i+1])
                        continue;
                        f=1;
                }
                if(f==0) cnt++;
        }while(next_permutation(arr,arr+n));
        cout <<(cnt%m)%m <<endl;
}
