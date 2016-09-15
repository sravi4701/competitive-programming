#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5];
	int b[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		cin>>b[i];
	}
	int ans=0;
	int mn;
	for(int i=0;i<5;i++){
		if(a[i]==b[i]){
			continue;
		}
		else if(a[i]<b[i]){
			int mn=b[i]-a[i];
			int p=(9-b[i])+a[i]+1;
			if(p<mn){
				mn=p;
			}
			ans+=mn;
		}
		else{
			int mn=a[i]-b[i];
			int p=(9-a[i]+b[i]+1);
			if(p<mn){
				mn=p;
			}
			ans+=mn;
		}
	}
	cout << ans <<endl;
}