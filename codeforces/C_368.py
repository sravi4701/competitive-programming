a=int(raw_input())
if(a&1):
	b=(a*a-1)/2
	c=b+1
else:
	b=((a/2)*(a/2))-1
	c=b+2
if(a==1 or a==2 ):
	print -1	
elif((a**2 +b**2)!=c**2):
	print -1
else:
	print b,c