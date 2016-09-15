#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int numunit=1;
    int curunit=0;
    while(curunit<n-1)
        {
        int prev_unit=curunit;
        int x=arr[prev_unit];
        int y=x+4;
        while(curunit<n-1 && (arr[curunit+1]>=x && arr[curunit+1]<=y))
            {
            curunit+=1;
        }
        if(curunit<n-1)
            {
            numunit++;
        }
        curunit++;
    }
    cout << numunit <<endl;

}
