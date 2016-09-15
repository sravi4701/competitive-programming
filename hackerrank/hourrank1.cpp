#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,x;
        cin>>n;
        int val = 0;
        for(int i=1 ; i<=n ; i++)
        {
            cin>>x;
            if(i%2 != 0)
                val = val^x;
        }
        if(n%2 == 0)
            cout<<0<<endl;
        else
            cout<<val*3<<endl;
}
