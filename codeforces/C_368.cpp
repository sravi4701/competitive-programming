#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long a,b,c;
	cin>>a;	
	if(a&1){
		b=(a*a-1)/2;
		c=b+1;
	}
	else{
		b=((a/2)*(a/2)-1);
		c=b+2;
	}
	cout << b <<" "<<c <<endl;
}