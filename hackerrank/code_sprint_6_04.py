'''input
1
Vishu
IS
'''
def transform(a,b,i):
	if(len(b)==0):
		for c in a[i:]:
			if(c.isupper()):
				return 0
		return 1
	if(i>=len(a)):
		return 0
	if(a[i]==b[0]):
		return transform(a,b[1:],i+1)
	if(a[i].upper()==b[0]):
		return (transform(a,b[1:],i+1) or (transform(a,b,i+1)))
	if a[i].isupper():
		return 0
	return transform(a,b[1:],i+1)

for i in xrange(input()):
	a=raw_input()
	b=raw_input()
	if(transform(a,b,0)):
		print "YES"
	else:
		print "NO"