#include<bits/stdc++.h>
using namespace std;
int get_n(string s){
	int ans=0;
	int x=s[0];
	int n=s.length();
	for(int i=1;i<n;i++){
		while(s[i]!=x){
			ans++;
			x=s[i];
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	cout << get_n(s)<<endl;
}