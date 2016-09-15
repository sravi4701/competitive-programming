#include<bits/stdc++.h>
using namespace std;
const long long MOD=1234567891;
long long gcd(long long a , long long b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
long long ipow(long long base, long long exp)
{
    long long result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}
/*
template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
*/
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,m;
	cin>>n>>m;
	vector<long long > a(n);
	vector<long long >b(m+1);
	for(long long i=0;i<n;++i) cin>>a[i];
	for (long long i=0;i<m+1;++i) cin>>b[i];
	long long k=0;
	long long p=(n*(n-1))/2;

	vector<long long>arr(p);
        for(long long i=0;i<n-1;i++)
        {
		for(long long j=i+1;j<n;j++)
		{
                        arr[k++]=gcd(a[i],a[j]);
		}
        }
        //for(int i=0;i<arr.size();i++) cout << arr[i] << " ";
        long long s=0;
        long long ans=0;
        for(long long j=0;j<p;++j)
        {
		for (long long i=0;i<m+1;i++)
		{
			s+=b[i]*ipow(arr[j],i);
		}
		//cout << s << " " ;
		ans=(ans+s)%MOD;
		s=0;
		//cout << ans <<endl;
        }
	cout << ans<<endl;
}
