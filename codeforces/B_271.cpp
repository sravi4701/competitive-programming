#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a=arr[0];
	for(int i=1;i<n;i++){
		arr[i]=arr[i]+a;
		a=arr[i];
	}
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout << (lower_bound(arr,arr+n,x)-arr)+1 <<endl;
	}
}