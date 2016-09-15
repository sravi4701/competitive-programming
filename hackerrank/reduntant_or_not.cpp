#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        set<long long int>s;
        long int n,a,i;
        cin>>n;
        while(n--)
                {
                cin>>a;
                std::pair< std::set<long long int>::iterator , bool > itr;
                itr = s.insert(a);
                if(itr.second==false) cout << "REDUNDANT" <<endl;
                else cout << "ADDED" <<endl;
        }


    return 0;
}
