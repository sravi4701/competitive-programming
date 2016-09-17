#include<bits/stdc++.h>
using namespace std;
const int max_size=10005;
vector<int>G[max_size];
int visited[max_size]={0};
int d[max_size]={0};

int bfs(int i){
	queue<int>q;
	if(!visited[i]){
		q.push(i);
		visited[i]=1;
	}
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<G[x].size();i++){
			if(!visited[G[x][i]]){
				d[G[x][i]]=d[x]+1;
				q.push(G[x][i]);
				visited[G[x][i]]=1;
			}
		}
	}
}
int main(){
	int n,u,v;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>u>>v;
		u--;
		v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	bfs(0);
	// cout << "d= "<<endl;
	// for(int i=0;i<max_size;i++){
	// 	cout << d[i]<<" ";
	// }
	// cout <<endl;
	int mx=-1;
	int node;
	for(int i=0;i<n;i++){
		if(d[i]>mx){
			mx=d[i];
			node=i;
		}
	}
	// cout << mx <<endl;
	// cout << node <<endl;
	fill_n(d,n,0);
	fill_n(visited,n,0);
	bfs(node);
	cout << (*max_element(d,d+n))<<endl;
}