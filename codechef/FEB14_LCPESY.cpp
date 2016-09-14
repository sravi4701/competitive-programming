#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		map<char,int>m1,m2;
		int n1=a.length(),n2=b.length();
		for(int i=0;i<n1;i++) {
			m1[a[i]]++;
		}
		for(int i=0;i<n2;i++){
			m2[b[i]]++;
		}
		int ans=0;
		for(map<char,int>::iterator it =m1.begin();it!=m1.end();++it){
			ans+=min(it->second,m2[it->first]);
		}
		cout << ans <<endl;
	}
}