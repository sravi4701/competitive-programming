#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin>>n;
    long long d[n];
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    if(s[0]=='<' or s[n-1]=='>'){
        cout << "FINITE" <<endl;
        return 0;
    }
    long i=0;
    int f=0;
    while(i>=0 && i<n){
        if(s[i]=='>'){
            if(i+d[i]>=n){
                break;
            }
        }
        else{
            if((i-d[i])<0){
                break;
            }
        }
        if(s[i]=='>'){
            if((s[i+d[i]]=='<') && (d[i]==d[i+d[i]])){
                f=1;
                break;
            }
        }
        else{
            if((s[i-d[i]]=='>') && (d[i]==d[i-d[i]])){
                f=1;
                break;
            }
        }
        if(s[i]=='>'){
            i+=d[i];
        }
        else{
            i-=d[i];
        }
    }
    if(f){
        cout << "INFINITE" <<endl;
    }
    else{
        cout << "FINITE" <<endl;
    }
}
