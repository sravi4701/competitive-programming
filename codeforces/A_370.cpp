/*input
5
3 -2 -1 5 6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	int b[n];
	b[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--){
		b[i]=a[i+1]+a[i];
	}
	for(int i=0;i<n;i++){
		cout << b[i]<<" ";
	}
}