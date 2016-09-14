import random
t=random.randint(1,1)
print t
for i in xrange(t):
	n=random.randint(1,50)
	m=random.randint(0,3000)
	print n,m
	for j in xrange(m):
		a=random.randint(1,n)
		b=random.randint(1,n)
		print a,b