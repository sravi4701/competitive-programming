#include<bits/stdc++.h>
using namespace std;
int visited[1005];
void prime_sieve(){	
	visited[0]=visited[1]=0;
	for(int i=2;i<=1005;i++){
		visited[i]=1;
	}
	for(int i=2;i*i<=1005;i++){
		if(visited[i]){
			for(int j=i*i;j<=1005;j+=i){
				visited[j]=0;
			}
		}
	}
}
int main(){
	prime_sieve();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int i,a=0;
		for(i=n-1;i>=0;i--){
			// cout << arr[i]<< " = "<<visited[arr[i]];
			if(visited[arr[i]]){
				a=arr[i];
				break;
			}
		}
		if(a==0){
			cout << -1 <<endl;
		}
		else{
			cout << a* a <<endl;
		}
	}
}