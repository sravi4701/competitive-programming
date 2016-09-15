#include <bits/stdc++.h>
using namespace std;
int n,m;
string arr[10];
bool get(int nx,int ny)
{
return (nx>=0 && nx<n && ny>=0 && ny<m);
}

bool can(int i,int j){
    int x = i , y = j;
    while(true){
        if(!get(x,y)) break;
        if(arr[x][y]=='*') break;
        if(arr[x][y]=='B') return false;
        x--;
        y--;
    }
    x = i, y = j;
    while(true){
        if(!get(x,y)) break;
        if(arr[x][y]=='*') break;
        if(arr[x][y]=='B') return false;
        x--;
        y++;
    }
    return true;
}

int fun(int i){
    if(i==n) return 1;
    int r = 0;
    for(int j=0;j<m;j++)
        if(arr[i][j]=='.' && can(i,j)){
            arr[i][j] = 'B';
            r += fun(i+1);
            arr[i][j] = '.';
        }
    return r;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << fun(0) << endl;
    return 0;
}
