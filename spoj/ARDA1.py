l=lambda : map(int,raw_input().split())
n1,n2=l()
pattern=[raw_input() for i in xrange(n1)]
m1,m2=l()
text=[raw_input() for i in xrange(m1)]

for i in xrange(m1-n2):
	for j in xrange(m2-n2):
		
