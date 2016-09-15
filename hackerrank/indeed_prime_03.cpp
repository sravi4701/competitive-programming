#include<bits/stdc++.h>
using namespace std;
#define MAX 100001

int len[MAX]={0};
int main()
{
        int m,n,q,p,x,y,a,A;
        cin>>m>>n>>q;
        map<int,vector<int> >M;
        map<int,int>N;
        for(int i=0;i<n;i++)
        {
                cin>>a;
                M[a].push_back(i);
                M[a][i]=1;
                N[i]=a;
        }
        map<int,vector<int> >::iterator itr;
        for(int i=0;i<n;i++)
        {
                len[M[i].size()]+=1;
        }
        int cur=0;
        for(int i=0;i<MAX;i++)
        {
                int cur2=cur;
                cur+=len[i];
                len[i]=cur2;
        }
        for(int i=0;i<q;i++)
        {
                cin>>A;
                if(A==2)
                {
			cin>>p;
			cout << len[p] <<endl;
                }
                if(A==1)
                {
                        cin>>x>>y;
                        int y1=N[x];
                        int l1=M[y1].size();
                        M[y1].erase(remove(M[y1].begin(),M[y1].end(),x),M[y1].end());
                        int l2=M[y].size();
                        N[x]=y;
			M[y].push_back(1);
                        if(l1==l2+1);
                        else
                        {
                                len[l1]+=1;
                                len[l2+1]-=1;
                        }
                }
        }
}
