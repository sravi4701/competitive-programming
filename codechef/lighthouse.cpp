#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,l;
    long long n;
    long long a[100001][2];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        l=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<2;k++)
            {
                scanf("%lld",&a[j][k]);
            }
        }
        long long miny,maxy,index1,index2,minx,maxx;
        miny=a[0][1];
        maxy=a[0][1];
        long long tempminx;
        for(int j=0;j<n;j++)
        {
            long long count;
            if(miny>=a[j][1])
            {
                count++;
                if(count==1)
                    tempminx=a[j][1];
                else{
                    if(miny==a[j][1])
                    {
                        if(tempminx>a[j][0]) {tempminx=a[j][0]; index1=j;}
                    }
                    else{
                        miny=a[j][1];
                        index1=j;
                    }
                }

            }
            if(maxy<a[j][1])
            {
                maxy=a[j][1];
                index2=j;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(minx>a[j][0])
            {
                minx=a[j][0];
            }
            if(maxx<a[j][0])
            {
                maxx=a[j][0];
            }
        }
        if(minx==a[index1][0])
        {
            printf("1\n");
            printf("%lld NE\n",index1+1);
        }
        else if(maxx==a[index1][0])
        {
            printf("1\n");
            printf("%lld NW\n",index1+1);
        }
        else if(minx==a[index2][0])
        {
            printf("1\n");
            printf("%lld SE\n",index2+1);
        }
        else if(maxx==a[index2][0])
        {
            printf("1\n");
            printf("%lld SW\n",index2+1);
        }
        else
        {
            if(a[index2][0]>a[index1][0])
            {
                printf("2\n");
                printf("%lld SW\n",index2+1);
                printf("%lld NE\n",index1+1);
            }
            else
            {
                 printf("2\n");
                printf("%lld SE\n",index2+1);
                printf("%lld NW\n",index1+1);
            }
        }
    }
}
