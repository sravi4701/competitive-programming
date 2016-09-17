#include<bits/stdc++.h>
using namespace std;
bool all9(string s,int n){
    // int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!='9'){
            return false;
        }
    }
    return true;
}
void the_next_pallindrome(string s){
    int n=s.length();
    if(all9(s,n)){
        cout << "1";
        for(int i=0;i<n-1;i++){
            cout << "0";
        }
        cout << "1"<<endl;
        return;
    }
    else{
        int mid=n/2;
        int i=mid-1;
        int j=((n%2)?mid+1:mid);
        bool add1=false;
        while(i>=0 && s[i]==s[j]){
            i--;j++;
        }
        if(i<0 or s[i]<s[j]){
            add1=true;
        }
        while(i>=0){
            s[j]=s[i];
            i--;
            j++;
        }
        if(add1){
            int carry=1;
            int i=mid-1;
            if(n&1){
                int a=s[mid]-'0';
                a+=carry;
                carry=a/10;
                a=a%10;
                s[mid]=a+'0';
                j=mid+1;
            }
            else{
                j=mid;
            }
            while(i>=0){
                int a=s[i]-'0';
                a+=carry;
                carry=a/10;
                a%=10;
                s[i]=a+'0';
                s[j++]=s[i--];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << s[i];
    }
    cout <<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // cout << p <<endl;
        the_next_pallindrome(s);
    }
}