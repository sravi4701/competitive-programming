#include<bits/stdc++.h>
using namespace std;
int main(){
    int A;
    int B;
    int C;
    int D;
    cin >> A >> B >> C >> D;
        int cnt=0;
        for(int an=1;an<=A;an++)
                {
                for(int bn=1;bn<=B;bn++)
                        {
                        for(int cn=1;cn<=C;cn++)
                                {
                                for(int dn=1;dn<=D;dn++)
                                        {
                                        if(((an-bn)%3==0)&&((bn+cn)%5==0)&&((an*cn)%4==0)&&(__gcd(an,dn)==1))
                                                cnt++;
                                }
                        }
                }
        }
        cout << cnt <<endl;
    return 0;
}
