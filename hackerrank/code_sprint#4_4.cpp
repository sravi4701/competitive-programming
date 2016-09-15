#include<bits/stdc++.h>
using namespace std;
const int x=5;
void initialize(int *graph,int v){
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			*((graph+i*v)+j)=x;
		}
	}
}
int main(){
	int v,e;
	cin>>v>>e;
	int graph[v][v];
	initialize((int*)graph,v);
	cout << graph[1][2]<<endl;
	int a,b,c;
	for(int i=0;i<e;i++){
		cin>>a>>b>>c;
		a--;b--;
		graph[a][b]=pow(2,c);
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<< graph[i][j]<<" ";
		}
		cout <<endl;
	}
}