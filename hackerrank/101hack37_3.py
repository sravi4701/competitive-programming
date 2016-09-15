from collections import defaultdict
d = defaultdict(int)
def permute(a):
	global d
	new = [0]*len(a)
	for i,s in enumerate(a):
		new[d[i+1]-1] = s
	return new
t, z = map(int,raw_input().split())
p = map(int,raw_input().split())
for i, s in enumerate(p):
	d[s] = i+1
a = range(1,z+t+2)
for i in xrange(z):
	a[i:i+t] = permute(a[i:i+t])
	# print a
print a[z-1]