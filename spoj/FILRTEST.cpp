#include<bits/stdc++.h>
using namespace std;
int lps[1000005];
void lpsarray(string s,int n){
	lps[0]=0;
	int i=1,j=0;
	while(i<n){
		if(s[i]==s[j]) lps[i++]=++j;
		else if(j!=0) j=lps[j-1];
		else lps[i++]=0;
	}
}
int main(){
	int k;
	string s;
	while(true){
		cin>>k>>s;
		if(k==-1 && s=="*") break;
		int n=s.length();
		if(k<n){
			cout <<0 <<endl;
			continue;
		}
		lpsarray(s,n);
		cout << ((k-n)/(n-lps[n-1]))+1 <<endl;
	}
}