#include<bits/stdc++.h>
using namespace std;
int main()
        {
        string s;
        int n,a,b;
        cin>>s;
        cin>>n;
        while(n--)
                {
                cin>>a>>b;
                reverse(s.begin()+a,s.begin()+b+1);
                cout << s <<endl;
        }

}
