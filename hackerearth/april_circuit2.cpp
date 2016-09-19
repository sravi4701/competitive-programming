#include<bits/stdc++.h>
using namespace std;
int find_hash(int arr[],int n){
    sort(arr,arr+n,greater<int>());
    int sum=0;
    for(int i=0;i<n;i++){
        int j=i;
        sum+=arr[i]*(i+1);
        while(i<n && arr[j]==arr[j+1]){
            sum+=arr[j]*(i+1);
            j++;
        }
        i=j;
    }
    return sum;
}
int main(){
	int n,q;
	cin>>n>>q;
	int arr[n];
	int a,b;
	memset(arr,0,sizeof(arr));
	for(int i=0;i<q;i++){
		cin>>a>>b;
		a--;
		arr[a]+=b;
		cout << find_hash(arr,n) <<endl;
	}
}
