# x,n=raw_input().split()
# n=int(n)
# x=x*n;
# res=0;
# for i in xrange(1,int(x)+1):
# 	p=i
# 	q=i+1
# 	r=0
# 	while(p>0 and q>0):
# 		y=p%10
# 		z=q%10
# 		if((y+z+r)>=10):
# 			res+=1
# 			break;
# 		else:
# 			r=1
# 			p/=10
# 			q/=10
# print res%(10**9+7)

import re

def isir(a):
	a = str(a)
	if set(a)&set('5678'): return 1
	if re.search('9[0-8]', a): return 1
	return 0

x, n = map(int, raw_input().split())
x = int(str(x)*n)

ans = 0
for i in xrange(1,x+1):
	if (isir(i)):
		ans += 1
print ans