#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
            {
            cin>>arr[i];
            sort(arr[i].begin(),arr[i].end());
        }
        bool result=true;
        for(int i=0;i<n;++i)
        {
            for(int j=1;j<n-1;++j)
            {
                if(arr[j][i]>arr[j+1][i])
                {
                    result=false;
                }
            }
        }
        if(result) cout << "YES" <<endl;
        else cout << "NO" <<endl;

    }
}
