#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int ans=0;
    int minus=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==-1){
            minus++;
        }
    }
    
    for(int i=0;i<=minus;i++){
        for(int j=0;j<=minus;j++){
            cout << i <<" "<<j <<endl;
        }
    }
    cout << ans <<endl; 
   
}