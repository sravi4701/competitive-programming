#include <iostream>
using namespace std;
static unsigned long long LeastPower(unsigned long long a, unsigned long long x)
{
    unsigned long long b = a;
    while (x % b == 0)
        b *= a;
    return b;
}


static unsigned long long SumDivisors(unsigned long long x)
{
    unsigned long long t = x;
    unsigned long long result = 1;
    {
        unsigned long long p = LeastPower(2, t);
        result *= p-1;
        t /= p/2;
    }

    for (unsigned long long i = 3; i*i <= t; i += 2)
    {
        unsigned long long p = LeastPower(i, t);
        result *= (p-1) / (i-1);
        t /= p/i;
    }
    if (1 < t)
        result *= 1+t;

    return result;
}
int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,q,x;
	cin>>n>>q;
	for(int i=0;i<q;++i)
	{
		cin>>x;
		n=n*x;
		cout << SumDivisors(n) <<endl;
	}

	return 0;
}
