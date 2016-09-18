/*input
RRRRDDD
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int l,r,u,d;
	l=r=u=d=0;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='L'){
			l++;
		}
		else if(s[i]=='R'){
			r++;
		}
		else if(s[i]=='U'){
			u++;
		}
		else if(s[i]=='D'){
			d++;
		}
	}
	int x=abs(l-r);
	int y=abs(u-d);
	if((x+y)&1){
		cout<<-1 <<endl;
	}
	else{
		cout << (x+y)/2<<endl;
	}
}