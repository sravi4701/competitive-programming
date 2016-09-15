#include <bits/stdc++.h>
using namespace std;
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main()
{
    int d1,m1,y1,d2,m2,y2,t;
    cin>>t;
    while(t--)
    {
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	int c=0;

	if(d1>13)
	m1++;
	if(d2<13)
	m2--;
	if(y1==y2)
	{
		for(int j=m1;j<=m2;++j)
		{
		if(dayofweek(13,j,y1)==5)
		{
			c++;
		}
		}
	}
	int cnt=0;
	if(y1<y2)
	{
	for(int i=y1;i<=y2;++i)
	{
		if(cnt==0)
		{
			for(int j=m1;j<=12;++j)
			{
				if(dayofweek(13,j,i)==5) c++;
			}
		}
		else if(cnt==y2-y1)
		{
			for(int j=1;j<=m2;j++)
			{
				if(dayofweek(13,j,i)==5) c++;
			}
		}
		else
		{
			for(int j=1;j<=12;j++)
			{
				if(dayofweek(13,j,i)==5) c++;
			}
		}
		cnt++;
	}
	}
	cout << c <<endl;
}
    return 0;
}
