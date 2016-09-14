#include<bits/stdc++.h>
using namespace std;
const int max_size =1005;

int edge[max_size][max_size];

map<int,int>cnt;

bool comp(int a,int b){
	return (cnt[a]<cnt[b]);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,a,b;
		scanf("%d%d",&n,&m);

		//initialize edges
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				edge[i][j]=0;
			}
		}

		//clear map
		cnt.clear();

		//taking input
		for(int i=0;i<m;i++){
			cin>>a>>b;
			int f=1;
			if(edge[a][b]==1){
				f=0;
			}
			if(f){
				edge[a][b]=1;
				edge[b][a]=1;
				cnt[a]++;
				cnt[b]++;
			}
		}

		int arr[n];

		for(int i=1;i<=n;i++){
			arr[i-1]=i;
		}

		sort(arr,arr+n,comp);
		/*
		for(int i=0;i<n;i++){
			cout <<arr[i]<<" ";
		}

		*/

		// create set
		set<int> s1,s2,both;
		string ans="YES";
		s1.insert(arr[0]);
		//start filling 

		for(int i=1;i<n;i++){
			int f=1,g=1;
			for(int x:s1){
				if(!edge[x][arr[i]]){
					f=0;
					break;
				}
			}
			for(int y:s2){
				if(!edge[y][arr[i]]){
					g=0;
					break;
				}
			}
			if(!f and !g){
				ans="NO";
				break;
			}
			else if(f and !g){
				s1.insert(arr[i]);
			}
			else if(!f and g){
				s2.insert(arr[i]);
			}
			else if(f and g){
				both.insert(arr[i]);
			}
		}

		/*
		for(int x:both){
			cout << x <<" ";
		}
		cout <<endl;
		*/

		if(ans=="NO"){
			cout << ans <<endl;
		}
		else{
			bool flag=true;
			while(flag){
				flag=0;
				for(int i:both){
					int f=1,g=1;
					for(int x:s1){
						if(!edge[x][i]){
							f=0;
							break;
						}
					}
					for(int y:s2){
						if(!edge[y][i]){
							g=0;
							break;
						}
					}
					if(!f and !g){
						ans="NO";
						break;
					}
					else if(f and !g){
						s1.insert(i);
						both.erase(i);
						flag=1;
					}
					else if(!f and g){
						s2.insert(i);
						both.erase(i);
						flag=1;
					}
				}
			}
			if(ans=="NO"){
				cout << ans <<endl;
			}
			else{
				for(int i:both){
					int f=1;
					for(int x:s1){
						if(!edge[x][i]){
							f=0;
							break;
						}
					}
					if(f){
						s1.insert(i);
					}
					else{
						int g=1;
						for(int y:s2){
							if(!edge[y][i]){
								g=0;
								break;
							}
						}
						if(g){
							s2.insert(i);
						}
						else{
							ans="NO";
							break;
						}
					}
					if(ans=="NO"){
						break;
					}
				}
				cout << ans<<endl;
			}
		}
	}
	return 0;
}