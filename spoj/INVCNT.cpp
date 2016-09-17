#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll merge(int arr[],int left,int mid,int right){
	int a[right-left+1];
	int i=left,j=mid+1,k=0;
	ll c=0;
	for(int l=left;l<=right;l++){
		if(i>mid){
			a[k++]=arr[j++];
		}
		else if(j>right){
			a[k++]=arr[i++];
		}
		else if(arr[i]<=arr[j]){
			a[k++]=arr[i++];
		}
		else{
			c+=(mid-i+1);
			a[k++]=arr[j++];
		}
	}
	k=0;
	for(int i=left;i<=right;i++){
		arr[i]=a[k++];
	}
	return c;
}
ll merge_sort(int arr[],int left,int right){
	int mid;
	ll inversion=0;
	// cout << "left= "<<left <<"right= "<<right <<endl;
	if(right>left){
		mid=(left+right)/2;
		inversion=merge_sort(arr,left,mid);
		inversion+=merge_sort(arr,mid+1,right);
		inversion+=merge(arr,left,mid,right);
	}
	return inversion;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout << merge_sort(arr,0,n-1)<<endl;
	}
}