/*input
())(())(())(
7
1 1
2 3
1 2
1 12
8 12
5 11
2 10
*/
#include<bits/stdc++.h>
using namespace std;
#define max_int 1000000
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
string s;
int t[max_int*4]={0};
int o[max_int*4]={0};
int c[max_int*4]={0};
void build(int node,int left ,int right){
	if(left==right){
		if(s[left]=='('){
			o[node]=1;
		}
		else{
			c[node]=1;
		}
		return;
	}
	int mid=(left+right)/2;
	build(node*2+1,left,mid);
	build(node*2+2,mid+1,right);
	int temp=min(o[node*2+1],c[node*2+2]);
	t[node]=t[node*2+1]+t[node*2+2]+temp;
	o[node]=o[node*2+1]+o[node*2+2]-temp;
	c[node]=c[node*2+1]+c[node*2+2]-temp;
}
iii query(int node,int left,int right,int l,int r){
	if(left>r or right<l){
		return (iii(0,ii(0,0)));
	}
	if(left>=l and right<=r){
		return (iii(t[node],ii(o[node],c[node])));
	}
	int mid=(left+right)/2;
	iii q1=query(node*2+1,left,mid,l,r);
	iii q2=query(node*2+2,mid+1,right,l,r);
	int temp,T,O,C;
	temp=min(q1.second.first,q2.second.second);
	T=q1.first+q2.first+temp;
	O=q1.second.first+q2.second.first-temp;
	C=q1.second.second+q2.second.second-temp;
	return (iii(T,ii(O,C)));
}
int main(){
	cin>>s;
	int m;
	cin>>m;
	int n=s.length();
	build(0,0,n-1);
	// for(int i=0;i<27;i++){
	// 	cout << "("<<t[i]<<","<<o[i]<<","<<c[i]<<")"<<endl;
	// }
	while(m--){
		int a,b;
		cin>>a>>b;
		a--;b--;
		iii x=query(0,0,n-1,a,b);
		cout << x.first*2<<endl;
	}

}