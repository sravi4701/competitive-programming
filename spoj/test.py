import random
t=random.randint(1,100)
print t
print
for _ in xrange(t):
	n=random.randint(5,100000)
	print n
	for i in xrange(n):
		print random.randint(1,10**7)
	print
