#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[26];
    for(int i=0;i<26;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int mx=0;
    for(int i=0;i<s.size();i++){
        mx=max(mx,arr[s[i]-'0']);
    }
    cout << s.size()*mx<<endl;
    return 0;
}
