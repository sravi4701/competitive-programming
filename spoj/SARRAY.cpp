/*input
abracadabra0AbRa4Cad14abra
*/

#include<bits/stdc++.h>
using namespace std;
struct suffix{
	int index;
	int rank[2];
};

bool comp(struct suffix a,struct suffix b){
	return (a.rank[0]==b.rank[0]?(a.rank[1]<b.rank[1]?1:0):(a.rank[0]<b.rank[0]?1:0));
}

void build_suffix_array(string s){
	int n=s.length();
	struct suffix suffixes[n];
	for(int i=0;i<n;i++){
		suffixes[i].index=i;
		suffixes[i].rank[0]=(s[i]-'a');
		suffixes[i].rank[1]=((i+1)<n?s[i+1]-'a':-1);
	}

	sort(suffixes,suffixes+n,comp);

	int ind[n];
	for(int k=4;k<2*n;k*=2){
		int rank=0;
		int prev_rank=suffixes[0].rank[0];
		suffixes[0].rank[0]=rank;
		ind[suffixes[0].index]=0;
		for(int i=1;i<n;i++){
			if((suffixes[i].rank[0]==prev_rank)){
				prev_rank=suffixes[i].rank[0];
				suffixes[i].rank[0]=rank;
			}
			else{
				prev_rank=suffixes[i].rank[0];
				suffixes[i].rank[0]=++rank;
			}
			ind[suffixes[i].index]=i;
		}
		// calculate next rank
		for(int i=0;i<n;i++){
			int next_index=suffixes[i].index+k/2;
			suffixes[i].rank[1]=(next_index<n?suffixes[ind[next_index]].rank[0]:-1);
		}
		sort(suffixes,suffixes+n,comp);
	}
	for(int i=0;i<n;i++){
		cout << suffixes[i].index<<endl;
	}
}
int main(){
	string s;
	cin>>s;
	build_suffix_array(s);
}