#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a,b;
    cin>>a>>b;
    int x,y;
    bool p=true;
    bool q=true;
    for(int a0 = 0; a0 < n-1; a0++){
        cin >> x >> y;
        if(a!=x){
            p=false;
        }
        if(b!=y){
            q=false;
        }
    }
    if(p or q){
        cout << "YES"<<endl;
    }
    else{
        cout << "YES" <<endl;
    }
    return 0;
}
