#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
cout<<"Ready"<<endl;
if(s=="  ")
{
return 0;
}
else if(s=="pq"||s=="qp"||s=="bd"||s=="db")
{
cout<<"Mirrored pair"<<endl;
}
else
cout<<"Ordinary pair"<<endl;
while(true)
{
getline(cin,s);
if(s=="  ")
{
break;
}
else if(s=="pq"||s=="qp"||s=="bd"||s=="db")
{
cout<<"Mirrored pair"<<endl;
}
else
cout<<"Ordinary pair"<<endl;
}
return 0;
}
