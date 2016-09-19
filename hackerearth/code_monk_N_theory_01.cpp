#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll A,B;
    cin>>A>>B;
    string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<s.size();++i)
    {
    	if(s[i]=='1')
    	{
		ans=(ans%B+A%B)%B;
    	}
    	A=(A*A)%B;

    }
    cout << ans <<endl;
    return 0;
}
