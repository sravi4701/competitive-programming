#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int a,b;
        for(int i=0;i<m;i++)
        {
		cin>>a>>b;
		int l=b-a+1;
                string p=s.substr(a-1,l);
                int cnt=0;
                cout << cnt <<endl;

        }

}
