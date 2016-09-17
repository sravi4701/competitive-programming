#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,num;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int>threads[n];
		int seq_n=0;
		for(int i=0;i<n;i++){
			cin>>x;
			seq_n+=x;
			for(int j=0;j<x;j++){
				cin>>num;
				threads[i].push_back(num);
			}
		}
		vector<int>seq(seq_n);
		for(int i=0;i<seq_n;i++){
			cin>>seq[i];
		}
		if(n==1){
			reverse(threads[0].begin(),threads[0].end());
			if(threads[0]==seq){
				cout << "Yes"<<endl;
			}
			else{
				cout << "No"<<endl;
			}
		}
		else{
			cout << "No" <<endl;
		}
	}
}