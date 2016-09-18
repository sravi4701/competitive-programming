#include<bits/stdc++.h>
using namespace std;
bool is_equal(int a,int b,int c){
	return ((a==b)&& (b==c));
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int j;
	int a=0,b=0,c=0,cnt=0;
	for(int i=1;i<=n-2;i++){
		// cout << "i= "<< i <<endl;
		a+=arr[i-1];
		b=arr[i];
		c=0;
		for(int k=i+1;k<n;k++){
			c+=arr[k];
		}
		// cout << "a= "<<a <<" b= "<<b <<" c= "<<c <<endl;
		for(j=i;j<=n-2;j++){
			if(j!=i){
				b+=arr[j];
				c-=arr[j];
			}
			// cout << "check "<<endl;
			// cout << "a= "<<a <<" b= "<<b <<" c= "<<c <<endl;
			if(is_equal(a,b,c)){cnt++;}
		}
	}
	cout <<cnt <<endl;
}