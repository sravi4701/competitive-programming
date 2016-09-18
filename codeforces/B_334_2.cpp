#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int x;
	multiset<int>m;
	for(int i=0;i<n;i++){
		cin>>x;
		m.insert(x);
	}
	while(m.size()!=k){
		int a=*m.begin();
		int b=*(++m.begin());
		if((a+b)>(*(--m.end()))){
			
		}
	}
	cout << *(--m.end()) <<endl;
}