/*#include<iostream>
using namespace std;
int main()
{
long t,a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
if(a%2==0&&b%2==0)
{
cout<<a+b<<endl;
}
else if(a%2!=0&&b%2!=0)
{
cout<<a+b-1<<endl;
}
else
{
cout<<"No Number"<<endl;
}

}
}*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if((x-y)==0||(x-y)==2)
        {
            if((x-y)==0)
            {
                if(x%2==0)
                cout<<2*x<<endl;
                else
                cout<<2*x-1<<endl;
            }
            else
            {
            if(y%2==0)
            cout<<2*y+2<<endl;
            else
            cout<<2*y+1<<endl;
            }
        }
        else
        cout<<"No Number"<<endl;
    }
    return 0;
}

