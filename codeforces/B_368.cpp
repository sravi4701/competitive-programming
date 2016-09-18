#include<bits/stdc++.h>
using namespace std;
int main(){
	int v,e,n,k,a,b;
	cin>>v>>e>>k;
	vector<int> G[v];
	for(int i=0;i<v;i++){
		cin>>a>>b;
		G[--a].push_back(--b);
	}
	int store[k];
	if(k>0){
		for(int i=0;i<k;i++){
			cin>>store[i];
		}
	}
}