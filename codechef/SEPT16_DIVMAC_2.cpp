/*input
1
6 7
2 5 8 10 3 44
1 2 6
0 2 3
1 2 6
0 4 6
1 1 6
0 1 6
1 4 6
*/

#include<bits/stdc++.h>
using namespace std;

const int mx =1000000;
const int sz=100000;

int p_d[mx];
int bit[sz+5];

void prime_divisor(){
	for(int i=0;i<mx;i++){
		p_d[i]=i;
	}
	for(int i=2;i*i<mx;i++){
		if(p_d[i]==i){
			for(int j=i*i;j<mx;j+=i){
				p_d[j]=min(i,p_d[j]);
			}
		}
	}
}


int parent(int i){
	i-=(i&(-i));
	return i;
}
int next(int i){
	i+=(i&(-i));
	return i;
}

void update(int i,int val,int n){
	i++;
	bit[i]=max(val,bit[i]);
	i=next(i);
	while(i<=n){
		bit[i]=max(val,bit[i]);
		i=next(i);
	}
}


int query(int i){
	i++;
	int ans=bit[i];
	i=parent(i);
	while(i>0){
		ans=max(bit[i],ans);
		i=parent(i);
	}
	return ans;
}

int main(){
	prime_divisor();
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=0;i<=n;i++){
			bit[i]=1;
		}
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			update(i,p_d[arr[i]],n);
		}
		for(int i=1;i<=n;i++){
			cout << bit[i]<<" ";
		}
		cout <<endl;
		while(m--){
			int type,l,r;
			cin>>type>>l>>r;
			l--;
			r--;
			if(type==0){
				for(int i=l;i<=r;i++){
					arr[i]=arr[i]/p_d[arr[i]];
					bit[i+1]=p_d[arr[i]];
					cout << "bit[i+1]= "<<bit[i+1]<<endl;
					update(i,p_d[arr[i]],n);
				}
			}
			else
				cout << max(query(r),query(l-1))<<endl;
		}
	}
}