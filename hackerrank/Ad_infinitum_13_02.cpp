#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
    {
    ll t;
    cin>>t;
    while(t--)
        {
        int a,b;
        cin>>a>>b;
        if(a==0 or b==0) cout << "First" <<endl;
        else if((a%2==0 && b%2!=0) or (a%2!=0 && b%2==0)) cout << "First" <<endl;
        else cout << "Second" <<endl;
    }
}
