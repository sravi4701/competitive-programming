#include<bits/stdc++.h>
using namespace std;
int main(){
	multiset<int>m;
	m.insert(3);
	m.insert(3);
	m.insert(3);
	m.insert(4);
	for(auto i:m){
		cout<<i<<" ";
	}
	cout<<endl;
	m.erase(m.find(3));
	for(auto i:m){
		cout<<i<<" ";
	}
	cout<<endl;

}