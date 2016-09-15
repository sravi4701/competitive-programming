#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie();
	for(int i=0;i<=100;i++)
	{
		arr[i]=0;
	}

        int n;
        cin>>n;
        int first[n];

        int a;
        for(int i=0;i<n;i++)
        {
                cin>>first[i];
        }
        for(int i=0;i<=n;i++)
        {
                cin>>a;
                arr[a]++;
        }
        for(int i=0;i<n;i++)
                {
                arr[first[i]]--;
        }
        for(int i=0;i<=100;i++)
        {
                if(arr[i]>0) cout << i <<endl;
        }
}
