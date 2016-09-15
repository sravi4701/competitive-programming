#include<bits/stdc++.h>
using namespace std;
int main()
{
        std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,f;
	cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
	int i,j;
        for(i=0;i<n-1;i++)
                {
                j=i+1;

                while(j<n)
                        {
                        f=0;
                        if(__gcd(arr[i],arr[j])>1){
                                f=1;
                                cout << j+1 <<" ";
                                break;

                        }
                        j++;
                }
                if(f==0) cout << -1 <<" ";
        }
        cout << -1 <<endl;
}
