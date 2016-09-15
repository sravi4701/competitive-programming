//__author__= "Ravi Shankar"

#include<bits/stdc++.h>
using namespace std;

/*******usful typedef's *********/
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;
typedef list<int>li;
typedef list<li>lii;
typedef set<int>si;
typedef set<si>sii;
typedef map<int,int> mi;
/**************some useful macros/preprocessor********/
#define be_fast std::ios::sync_with_stdio(false);std::cin.tie(NULL)
#define print cout <<
#define loop(a,b,c)   for (int (a)=(b); (a)<(c); ++(a))
#define loopn(a,b,c)  for (int (a)=(b); (a)<=(c); ++(a))
#define loopd(a,b,c)  for (int (a)=(b); (a)>=(c); --(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define X first
#define Y second
///iterator range
#define all(c) c.begin(), c.end()
///reverse all iterator
#define rall(c) c.rbegin(),c.rend()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++))
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
/***************all user defines functions ******************/
string hex_to_bin(string s){
    int l=s.length();
    string res="";
    for(int i=0;i<l;i++){
        if(s[i]=='0'){
            res+="0000";
        }
        else if(s[i]=='1'){
            res+="0001";
        }
        else if(s[i]=='2'){
            res+="0010";
        }
        else if(s[i]=='3'){
            res+="0011";
        }
        else if(s[i]=='4'){
            res+="0100";
        }
        else if(s[i]=='5'){
            res+="0101";
        }
        else if(s[i]=='6'){
            res+="0110";
        }
        else if(s[i]=='7'){
            res+="0111";
        }
        else if(s[i]=='8'){
            res+="1000";
        }
        else if(s[i]=='9'){
            res+="1001";
        }
        else if(s[i]=='A'){
            res+="1010";
        }
        else if(s[i]=='B'){
            res+="1011";
        }
        else if(s[i]=='C'){
            res+="1010";
        }
        else if(s[i]=='D'){
            res+="1101";
        }
        else if(s[i]=='E'){
            res+="1110";
        }
        else if(s[i]=='F'){
            res+="1111";
        }
    }
    return res;
}
string bin_to_hex(string s){
    int l=s.length();
    string res="";
    int f=0;
    for(int i=0;i<l;i+=4){
        if(f &&s.substr(i,4)=="0000"){
            res+="0";
        }
        else if(s.substr(i,4)=="0001"){
            res+="1";
            f=1;
        }
        else if(s.substr(i,4)=="0010"){
            res+="2";
            f=1;
        }
        else if(s.substr(i,4)=="0011"){
            res+="3";
            f=1;
        }
        else if(s.substr(i,4)=="0100"){
            res+="4";
            f=1;
        }
        else if(s.substr(i,4)=="0101"){
            res+="5";
            f=1;
        }
        else if(s.substr(i,4)=="0110"){
            res+="6";
            f=1;
        }
        else if(s.substr(i,4)=="0111"){
            res+="7";
            f=1;
        }
        else if(s.substr(i,4)=="1000"){
            res+="8";
            f=1;
        }
        else if(s.substr(i,4)=="1001"){
            res+="9";
            f=1;
        }
        else if(s.substr(i,4)=="1010"){
            res+="A";
            f=1;
        }
        else if(s.substr(i,4)=="1011"){
            res+="B";
            f=1;
        }
        else if(s.substr(i,4)=="1010"){
            res+="C";
            f=1;
        }
        else if(s.substr(i,4)=="1101"){
            res+="D";
            f=1;
        }
        else if(s.substr(i,4)=="1110"){
            res+="E";
            f=1;
        }
        else if(s.substr(i,4)=="1111"){
            res+="F";
            f=1;
        }

    }
    if(f==0){
        return "0";
    }   
    return res;
}
/******************main starts here *************************/
int main()
{
    be_fast;
    int q,k=8;
    q=1;
    while(q--){
        //cin>>k;
        //cin.clear();
        string a="1B",b="9F",c="58";
        //cin>>a>>b>>c;
        a=hex_to_bin(a);
        b=hex_to_bin(b);
        c=hex_to_bin(c);
        int la,lb,lc;
        la=a.length();
        lb=b.length();
        lc=c.length();
        while(la<max(lb,lc)){
            a="0000"+a;
            la+=4;
        }
        while(lb<max(la,lc)){
            b="0000"+b;
            lb+=4;
        }
        while(lc<max(la,lb)){
            c="0000"+c;
            lc+=4;
        }
        int i;
        for(i=0; i<la; i++)
        {
            if(a[i]=='0' && b[i]=='0' && c[i]=='1'){b[i]='1';k--;}
            else if(a[i]=='0' && b[i]=='1' && c[i]=='0'){b[i]='0';k--;}
            else if(a[i]=='1' && b[i]=='0' && c[i]=='0'){a[i]='0';k--;}
            else if(a[i]=='1' && b[i]=='1' && c[i]=='0'){b[i]='0';a[i]='0';k-=2;}
            if(k<0)break;
        }
        if(k<0){
            cout << -1 <<endl;
        }
        else{
            cout << bin_to_hex(a) <<endl;
            cout << bin_to_hex(b)<<endl;
        }
    }       
}
/*******************main ends here **************************/
