#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(b,b+m);
	int i=0,j=0;
	int x=b[j];
	j++;
	while(i<x){
		if((i+1)==x){
			if(j<m){
				x=b[j++];
				continue;
			}
			else{
				break;
			}
		}
		if((arr[i]>(x-i-1))){
			arr[i]=x-i-1;
		}
		i++;
	}

	cout << accumulate(arr,arr+n,0)<<endl;
}