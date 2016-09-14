#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int i=0;
		int j=n-1;
		int f=0;
		while(i<j){
			if(s[i]==s[j] && (s[i]!='.' && s[j]!='.')){
				i++;
				j--;
			}
			else if(s[i]=='.' && s[j]!='.'){
				s[i]=s[j];
				i++;
				j--;
			}
			else if(s[j]=='.' && s[i]!='.'){
				s[j]=s[i];
				i++;
				j--;
			}
			else if(s[i]=='.' && s[j]=='.'){
				s[i]='a';
				s[j]='a';
				i++;
				j--;
			}
			else if(s[i]!=s[j]){
				f=-1;
				break;
			}
		}
		if(f==-1){
			cout << f <<endl;
			continue;
		}
		if(n&1 && (s[n/2]=='.')){
			s[n/2]='a';
		}
		cout << s <<endl;
	}
}