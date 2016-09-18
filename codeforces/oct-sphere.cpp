#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

long long int mod=1000000007;

int main() {
	long long int i,j,n,m,c;
	cin>>n>>m>>c;
	long long int u[n],l[m];
	for(i=0;i<n;i++)
	 cin>>u[i];
	for(j=0;j<m;j++)
	 cin>>l[j];
	sort(u,u+n);
	sort(l,l+m);
	map<long long int,long long int> final;
	long int long sum=0;
	for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	 {
	   if(u[i]==l[j])
	     {
	       final[u[i]]++;
	       sum++;
	     }
	   if(u[i]<l[j])
	    break;
	  }
	}
	long long int k=0;

  for(i=0;i<n-1;i++)
  {
    if(u[i]!=u[i+1])
     {
       u[k]=u[i];
       k++;
     }
  }

  u[k]=u[n-1];
  k++;      // last element

	long int replicasum=sum,imp[n];
	for(i=0;i<k;i++)
	{
	  imp[i]=sum-final[u[i]];
	  sum=sum-final[u[i]];
	}
	long int ans;
	for(i=1;i<=c;i++)
	{
	  ans=0;
	  for(j=0;j<k;j++)
	  {

	    ans+=(((final[u[j]])*(imp[j]))%mod);
	    imp[j]=(final[u[j]]*imp[j]);

 }
	  cout<<ans%mod<<" ";
	  for(j=0;j<k;j++)
	  {
	    long long int temp=imp[j];
	    imp[j]=ans-imp[j];
	    ans=ans-temp;
	  }

	}
	return 0;
}
