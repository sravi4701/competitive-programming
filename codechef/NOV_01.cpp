#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
                ll n,m;
		cin>>n>>m;
		if(n==1) {
			cout << "Yes" <<endl;
			continue;
		}
		if(n==2)
		{
                        if(m==0) cout << "No" <<" "<<1 <<endl;
			if(m==1) cout << "YES" <<endl;
			continue;
		}
		if(m==0)
		{
			cout << "No" << " " <<1 <<endl;
			continue;
		}
		if(n%2!=0)
			cout << "Yes" <<endl;
		else
		{
			if((n/2)==m)
				cout << "No" << " "<<2 <<endl;
			else if(m%2!=0)
				cout << "Yes" <<endl;
			else if(m%2==0)
				cout << "No" << " "<<n/2 <<endl;
		}
        }
}
