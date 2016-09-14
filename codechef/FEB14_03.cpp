#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,x;
	cin>>n>>k;
	vector<int>arr(n);
	map<int,int>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(m[arr[i]]){
			m[arr[i]]=min(m[arr[i]],min(i+1,n-i));
		}
		else{
			m[arr[i]]=min(i+1,n-i);
		}
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int x=arr[i];
		if(m[k-x] && x!=(k-x)){
			ans=min(ans,max(m[x],m[k-x]));
		}
	}
	if(ans==INT_MAX){
		cout << -1 <<endl;
	}
	else{
		cout << ans <<endl;
	}
 
}