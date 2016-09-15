#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
        ll t,x1,x2,x3,y1,y2,y3,b,A,i;
        cin>>t;
        while(t--)
        {
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

                A=(abs((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))))/2;
                b=__gcd(abs(x1-x2),abs(y1-y2))+__gcd(abs(x2-x3),abs(y2-y3))+__gcd(abs(x3-x1),abs(y3-y1));
                i=(A+1)-b/2;
                cout << i <<endl;
        }
}
