#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;

		int l=a.length();
                for(int i=0;i<l and i!=b.length();i++)
                {
                        if(a[i]==b[i]) {l++;continue;}
                        else if(b[i]=='B')
                        {
				a.append("B");
				reverse(a.begin(),a.end());
				l++;
                        }
                        else
                        {
				a.append("A");
				l++;
                        }
		}
		if(a==b) cout << "Possible" <<endl;
		else cout << "Impossible" <<endl;
}
