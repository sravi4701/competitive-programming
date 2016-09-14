#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int t=1;t<=n;t++)
    {
        string s;
        cin>>s;
        int len=s.length();
        int res=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='-' && i==0)
            {
                res++;
                while(s[i]!='+' && i!=len)
                {
                    i++;
                }
            }
            if(s[i]=='-' && i!=0)
            {
                res+=2;
                while(s[i]!='+' && i!=len)
                {
                    i++;
                }
            }
        }
        cout << "Case #"<<t << ": "<<res<<endl;
    }
}
