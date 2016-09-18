#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    if(n%3==0){
        cout << (n/3)*2 <<endl;
    }
    else{
    cout << ((n/3)*2)+1 <<endl;
    }
}
