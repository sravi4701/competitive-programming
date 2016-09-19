s=raw_input()
for _ in xrange(input()):
	a,b,c,d=map(int,raw_input().split())
	print "Yes" if(s[a-1:b]==s[c-1:d]) else "No"