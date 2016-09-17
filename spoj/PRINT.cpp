#include<bits/stdc++.h>
using namespace std;
void generate_prime(int *l,int *r){
	int n=(*r-*l-1);
	bool used[n];
	for(int i=0;i<n;i++) used[i]=1;
	for(int i=2;i*i<=(*r);i++){
		for(int j=max(i*i,((*l)+i-1)/i*i);j<=(*r);j+=i){
			used[j-(*l)]=0;
		}
	}
	for(int i=max(*l,2);i<=*r;++i){
		if(used[i-*l]){
			printf("%d\n",i);
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int l,r;
	while(t--){
		scanf("%d%d",&l,&r);
		generate_prime(&l,&r);
	}
}