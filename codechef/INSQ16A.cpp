#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool powerof2(int n){
	return ( n && (!(n&(n-1))));
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(powerof2(n)){
			printf("%s\n","No");
		}
		else{
			printf("%s\n", "Yes");
		}
	}
}