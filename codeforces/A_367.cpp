/*input
0 0
2
2 0 1
0 2 2
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	int x,y,v;
	double ans=10000000000.0;
	while(n--){
		cin>>x>>y>>v;
		double z=hypot(double((a-x)),double((b-y)));
		ans=min(ans,z/v);
	}
	printf("%0.15lf\n",ans);
}