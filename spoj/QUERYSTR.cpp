#include<bits/stdc++.h>
using namespace std;
void z_array(string s,int z[],int n){
	int left=0,right=0;
	for(int k=1;k<n;k++){
		if(k>right){
			left=right=k;
			while(right<n && s[right]== s[right-left]){
				right++;
			}
			z[k]=right-left;
			right--;
		}
		else{
			int k1=k-left;
			if((z[k1]+k)<=right){
				z[k]=z[k1];
			}
			else{
				left=k;
				while(right<n && s[right]==s[right-left]){
					right++;
				}
				z[k]=right-left;
				right--;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		reverse(s.begin(),s.end());
		int z[n];
		z[0]=n;
		z_array(s,z,n);
		int q;
		cin>>q;
		while(q--){
			cin>>x;
			cout << z[n-x]<<endl;
		}
	}
}