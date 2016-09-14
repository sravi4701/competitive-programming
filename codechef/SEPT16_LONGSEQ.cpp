#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x=count(s.begin(),s.end(),'0');
		int y=count(s.begin(),s.end(),'1');
		if(x==1 or y==1){
			cout << "Yes" <<endl;
		}
		else{
			cout << "No"<<endl;
		}
	}
}