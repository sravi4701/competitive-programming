#include<bits/stdc++.h>
using namespace std;
int main(){
	int d,l,v1,v2;
	cin>>d>>l>>v1>>v2;
	double x=(double)((v1*l)-(v1*d))/(v1+v2);
	x=x/v1;
	cout << setprecision(15)<<fixed <<x <<endl;
}