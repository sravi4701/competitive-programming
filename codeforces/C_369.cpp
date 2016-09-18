#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int i=0;
	int n=s.length();
	// cout << "n="<<n <<endl;
	for(;i<n;i++){
		if(s[i]!='a'){
			// cout << "i break "<< i <<endl;
			break;
		}
	}
	if(i==n){
		s[n-1]='z';
		cout << s <<endl;
		return 0;
	}
	while(i<n){
		// cout << "i="<<i<<" " << s[i]<<endl;
		if(s[i]=='a'){
			break;
		}
		else{
			s[i]=char(int(s[i])-1);
		}
		i++;
	}
	cout << s <<endl;
}