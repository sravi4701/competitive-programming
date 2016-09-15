def lcs(a,b):
	dp=[[0 for i in xrange(len(b)+1)] for j in xrange(len(a)+1)]
	for i in xrange(1,len(a)+1):
		for j in xrange(1,len(b)+1):
			if(a[i-1]==b[j-1]):
				dp[i][j]=dp[i-1][j-1]+1
			else:
				dp[i][j]=max(dp[i-1][j],dp[i][j-1])
	return dp[len(a)][len(b)]
a=raw_input()
b=raw_input()
import string
ans=0
k=lcs(a,b)
for ch in string.lowercase:
	for i in xrange(len(a)+1):
		temp=list(a)
		temp.insert(i,ch)
		if(lcs(temp,b)==k+1):
			ans+=1
print ans