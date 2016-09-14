#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[3]={0,0,0};
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R') arr[0]++;
            else if(s[i]=='G') arr[1]++;
            else if(s[i]=='B') arr[2]++;
        }
        sort(arr,arr+3);
        cout << arr[0]+arr[1] <<endl;

    }
}
