#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
using namespace std;
int indexofmin(long long int arr[],long long int size)
{
	int index=0;
	for(int j=1;j<size;j++)
	{
		if (arr[j]<arr[index])
		{
			index=j;
		}
	}
	return index;
}

int main() {
	std::ios::sync_with_stdio(false);
	long long int N,W,ind,val;
	long long int L,R;
	long long int *height,*rate,*itertoreachL;
	int month=0,i,j;
	cin>>N>>W>>L;
	height=( long long int *) malloc(N*sizeof (long long int));
	rate=( long long int *) malloc(N*sizeof( long long int));
	itertoreachL=( long long int *) malloc(N*sizeof( long long int));
	for(i=0;i<N;i++)
	{
		cin>>height[i]>>rate[i];
		if(rate[i]>0)
		{
			itertoreachL[i]=floor((L-height[i])/rate[i])+1;
		}
		else
		{
			itertoreachL[i]=1000000;
		}

	}
	while(W!=0)
	{
	ind=indexofmin(itertoreachL,N);
	val=height[ind]+(itertoreachL[ind]-1)*rate[ind];

	if(val<W)
	{
		W=W-val;
		itertoreachL[ind]=itertoreachL[ind]+1;
	}
	else if (val>=W)
	{
		W=0;
		cout<<itertoreachL[ind];
	}
	}
	return 0;
	}
