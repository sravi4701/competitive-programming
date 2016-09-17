I=lambda:map(int,raw_input().split())
for i in xrange(input()):
	n=int(raw_input())
	threads=[I() for i in xrange(n)]
	final=I()
	se=zip(*threads)
	for i in reversed(final):
		i


