I=lambda:map(int,raw_input().split())

for i in xrange(input()):
	n,k,b=I()
	p=((b-1)*(b))/2
	x=(n-p)/b
	if(x==0):
		x=1
	s=0
	if(b>k):
		print -1
		continue;
	arr=[(x+i) for i in xrange(b)]
	s=sum(arr)
	if(s>n):
		print -1
		continue
	if(s==n):
		for j in arr:
			print j,
		print
		continue
	dif=n-s
	f=0
	j=b-1;
	for i in xrange(dif):
		if((arr[j]+1)>k):
			f=1
			break
		else:
			arr[j]=arr[j]+1
			j-=1
	if(f):
		print -1
	else:
		for j in arr:
			print j,
		print



