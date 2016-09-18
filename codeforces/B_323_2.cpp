#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int visited[n];
        for (int i=0;i<n;i++) visited[i]=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        int i=2;
        int val=0;
        int dir=0;
        while(i<n)
        {
			if(arr[i]<=val)
			{
				if(!visited[i])
				{
                                        val++;
                                        visited[i]=1;
				}
			}
			++i;
			if(val==n and i==n) break;
			if(i==n) {++dir;i=0;}
        }
        cout << dir+1 <<endl;

}
