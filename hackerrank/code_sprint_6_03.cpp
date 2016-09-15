#include<bits/stdc++.h>
using namespace std;
int max(int a,int b,int c,int d){
	int ar[4]={a,b,c,d};
	sort(ar,ar+4);
	return ar[3];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sz=2*n;
		int arr[sz][sz];
		for(int i=0;i<(2*n);i++){
			for(int j=0;j<(2*n);j++){
				cin>>arr[i][j];
			}
		}
		long long sum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				sum+=max(arr[i][j],arr[i][2*n-j-1],arr[2*n-i-1][2*n-j-1],arr[2*n-i-1][j]);
			}
		}
		cout << sum <<endl;
	}
}