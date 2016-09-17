n=int(raw_input())
ans=1
pre=[0]*(n+1)
mod=109546051211;
pre[0]=1
pre[1]=1
for i in xrange(2,n+1):
	pre[i]=(pre[i-1]*i)%mod
	ans=(ans*pre[i])%mod
	if(ans==0):
		break
print ans