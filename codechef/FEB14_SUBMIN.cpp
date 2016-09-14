#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	map<int ,int> m;
	int mn;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		mn=arr[i];
		for(int j=i;j<n;j++){
			if(arr[j]<mn){
				mn=arr[j];
			}
			m[mn]++;
		}
	}
	int q;
	cin>>q;
	while(q--){
		int k;
		cin>>k;
		cout << (m.find(k)!=m.end()?m[k]:0)<<endl;
	}
}