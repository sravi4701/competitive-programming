#include<bits/stdc++.h>
using namespace std;
int lps[100005];
void lps_array(string s){
	lps[0]=0;
	int n=s.length();
	int i=1,j=0;
	while(i<n){
		if(s[i]==s[j]){
			lps[i++]=++j;
		}
		else{
			if(j!=0) j=lps[j-1];
			else lps[i++]=0;
		}
	}
	if((n%(n-lps[n-1]))==0)
		cout << (n/(n-lps[n-1]))<<endl;
	else
		cout << 1 <<endl;
}
int main(){
	string s;
	while(true){
		cin>>s;
		if(s=="*") break;
		lps_array(s);
	}
}