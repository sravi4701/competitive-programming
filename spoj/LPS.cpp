#include <bits/stdc++.h>
using namespace std;
int min(int a, int b)
{
    int res = a;
    if(b < a)
        res = b;
    return res;
}

void findLongestPalindromicString(string text)
{
    int N = text.length();
    if(N == 0)
        return;
    N = 2*N + 1;
    int L[N];
    L[0] = 0;
    L[1] = 1;
    int C = 1, R=2, i=0, iMirror,maxLPSLength=0,maxLPSCenterPosition=0,diff=-1,start=-1,end=-1;
    for (i = 2; i < N; i++)
    {
        iMirror  = 2*C-i;
        L[i] = 0;
        diff = R - i;
        if(diff > 0)
            L[i] = min(L[iMirror], diff);
        while ( ((i + L[i]) < N && (i - L[i]) > 0) &&
            ( ((i + L[i] + 1) % 2 == 0) ||
            (text[(i + L[i] + 1)/2] == text[(i - L[i] - 1)/2] )))
        {
            L[i]++;
        }

        if(L[i] > maxLPSLength)
        {
            maxLPSLength = L[i];
            maxLPSCenterPosition = i;
        }
        if (i + L[i] > R)
        {
            C = i;
            R = i + L[i];
        }
    }
	start = (maxLPSCenterPosition - maxLPSLength)/2;
    end = start + maxLPSLength - 1;
    for(i=start; i<=end; i++)
        printf("%c", text[i]);
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string text;
	cin>>text;
	findLongestPalindromicString(text);
	return 0;
}
