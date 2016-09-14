/*input
3
2
6 1 2 3 4 5 6
9 3 3 3 4 4 4 5 5 5
2
5 2 3 4 5 6
7 1 1 2 2 3 3 4
3
4 1 1 2 3
4 1 2 2 3
4 1 2 3 3
*/
#include<bits/stdc++.h>
using namespace std;
#define inf 10000000
int main(){
	int t,n;
	cin>>t;
	int arr[6]={0};

	while(t--){
		cin>>n;
		int ans=0;
		int index=0;
		int storage,x;
		vector<int>maximum;
		for(int i=1;i<=n;i++){
			cin>>storage;
			int s=0;
			s+=storage;
			fill_n(arr,6,0);
			for(int l=0;l<storage;l++){
				cin>>x;
				x--;
				arr[x]++;
			}
			int zero=count(arr,arr+6,0);
			if(zero>2){
				if(s>ans){
					index=i;
					ans=s;
				}
				maximum.push_back(s);
			}
			else{
				for(int l=0;l<3;l++){
					int mn=inf;
					for(int j=0;j<6;j++){
						if(arr[j]!=0 && arr[j]<mn){
							mn=arr[j];
						}
					}
					int p=0;
					for(int j=0;j<6;j++){
						if(arr[j]>=mn){
							arr[j]-=mn;
							p++;
						}
					}
					if(p==4){
						s+=1*mn;
					}
					else if(p==5){
						s+=2*mn;
					}
					else if(p==6){
						s+=4*mn;
					}
				}
				if(s>ans){
					index=i;
					ans=s;
				}
				maximum.push_back(s);
			}
		}
		if(count(maximum.begin(),maximum.end(),ans) >=2){
			cout << "tie"<<endl;
		}
		else if(index==1){
			cout << "chef"<<endl;
		}
		else{
			cout << index<<endl;
		}
	}
}