#include <bits/stdc++.h>
using namespace std;
bool case1(string s){
	int c=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u' or s[i]=='y'){
			c++;
		}
	}
	if((s.length()-c)>c){
		return true;
	}
	else {
		return false;
	}
}
bool case2(string s){
	int i=0;
	while(i<s.length()){
		int c=0;

		while(s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' &&s[i]!='y' && i<s.length()){
			c++;
			if(c==3){
				return true;
			}
			i++;
		}
		i++;
	}
	return false;

}
int main()
{
	int t;
	cin>>t;
	while(t--){
        string s;
		cin>>s;
		if(case1(s) or case2(s)){
			cout << "hard" <<endl;
		}
		else{
			cout << "easy" <<endl;
		}

	}
    return 0;
}

