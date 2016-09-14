for _ in xrange(input()):
	n,s=raw_input().split()
	a=map(int,raw_input().split())
	odd=0
	even=0
	for i in xrange(int(n)):
		if(a[i]&1):
			odd+=1
		else:
			even+=1
	if(even==1 and odd==1):
		print s
	else:
		print "Dum"