#include<bits/stdc++.h>
using namespace std;
bool is_fit(int arr[],int capacity,int n,int k){
	int lo=0,hi=n-1;
	
}
int search(int arr[],int lo,int hi,int n,int k){
	int mid=0;
	while(hi>lo){
		if(mid==(lo+hi)/2) break;
		mid=lo + (hi-lo)/2;
		if(is_fit(arr,mid,n,k)){
			hi=mid;
		}
		else{
			lo=mid;
		}
	}
	return lo;
}
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << search(arr,0,10000000,n,k)<<endl;
}