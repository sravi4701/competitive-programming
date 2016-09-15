#include<bits/stdc++.h>
using namespace std;
int capital[26];
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int n=a.length();
		int m=b.length();
		int j=0,l=0,lo=0;
		for(int i=0;i<m;i++){
			while(j<n){
				if(b[i]==a[j]){
					l+=1;
					break;
				}
				if(b[i]==toupper(a[j])){
					l+=1;
					break;
				}
				if(isupper(a[j])){
					capital[a[j]-'A']++;
				}
				if(islower(a[j])){
					lo+=1;
				}
				j++;
			}
			if(j==n){
				break;
			}
		}
		for(int i=0;i<m;i++){
			if(capital[b[i]-'A']){
				lo+=1;
				capital[b[i]-'A']--;
			}
		}
	}
}