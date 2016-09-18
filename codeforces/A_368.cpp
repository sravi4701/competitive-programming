/*input
1 1
W
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	string ans="#Black&White";
	char ch;
	for(int i=0;i<n;i++){
		for(int i=0;i<m;i++){
			cin>>ch;
			if(ch=='C' or ch=='M' or ch=='Y'){
				ans="#Color";
			}
		}
	}
	cout << ans <<endl;
}