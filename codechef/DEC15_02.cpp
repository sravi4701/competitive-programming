#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
float slope(float(a),float(b))
{
        return -(a/b);
}
int main()
{
        ll t,n,A,B,C;
        cin>>t;
        while(t--)
        {
                cin>>n;
                int res=0;
                int arr[n][3];
                for(ll i=0;i<n;i++)
                {
                        for (int j=0;j<3;j++)
                        {
                                cin>>arr[i][j];
                        }
                }
                for (int i=0;i<n;i++)
                {
			cout << arr[i][0] << " "<<arr[i][1] << " " << arr[i][2] <<endl;
                }
                for(int i=0;i<n;i++)
                {
                        for(int j=0;(j<n and i!=j);j++)
                        {
                                if(slope(arr[i][0],arr[i][1])== slope(arr[j][0],arr[j][1]) and arr[i][2]!=arr[j][2])
                                {
                                        cout << slope(arr[i][0],arr[i][1]) << " " <<slope(arr[j][0],arr[j][1]) <<endl;
                                        cout << arr[i][2] << " " << arr[j][2] << endl;
					res++;
                                }
                        }
                }
                cout << res <<endl;
        }

}
