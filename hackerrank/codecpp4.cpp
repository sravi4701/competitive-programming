#include<bits/stdc++.h>
using namespace std;
class Matrix{
	public:
		vector<vector<int> > a;
		Matrix operator+(Matrix y)
		{
			int l=a.size();
			int p=a[0].size();
			Matrix result;
			for(int i=0;i<l;i++)
			{
				vector<int>b;
				for(int j=0;j<p;j++)
			k		{
					int r=a[i][j]+y.a[i][j];
					b.push_back(r);
				}
				result.a.push_back(b);
			}
			return result;
		}

};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}
