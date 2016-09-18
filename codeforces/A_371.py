'''input
1 100 200 200 75
'''
l1,r1,l2,r2,k=map(int,raw_input().split())

if(l2 > r1 or r2<l1):
	print 0
else:
	l=0
	r=0
	if(l2>=l1):
		l=l2
	else:
		l=l1
	if(r2>=r1):
		r=r1
	else:
		r=r2
	if(k>=l and k<=r):
		print (r-l)
	else:
		print r-l+1