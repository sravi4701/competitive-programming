import random

def is_prime(n):
	if(n<=1):
		return 0
	if(n==2 or n==3):
		return 1
	if(not n%2):
		return 0
	for i in xrange(100):
		a=random.randint(1,n-1)
		if(pow(a,n-1,n)!=1):
			return 0
	return 1
for _ in xrange(input()):
	n=int(raw_input())
	n=n-1 if n%2==0 else n-2
	while(True):
		if(is_prime(n)):
			print n
			break
		n-=2
