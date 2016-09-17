#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int i=1;
	while(t--){
		double r;
		cin>>r;
		r=4*r*r+0.25;
		cout << setprecision(2)<<fixed <<"Case "<<i++<<": "<<r<<endl;
	}
}