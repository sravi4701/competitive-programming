/*input
1 1 1
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,d,total=0,ans=0;
	cin>>n>>b>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]>b){
			continue;
		}
		total+=arr[i];
		if(total>d){
			total=0;
			ans+=1;
		}
	}
	cout << ans <<endl;
}