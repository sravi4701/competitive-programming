I = lambda : map(int, raw_input().split())
import sys
n, k = I()
arr = I()
from collections import defaultdict
m = defaultdict(int)
for i in xrange(n):
	d = min(i+1, n-i)
	if (m[arr[i]]):
		m[arr[i]] = min(d, m[arr[i]])
	else:
		m[arr[i]] = d
ans = sys.maxint
for i in xrange(n):
	x = arr[i]
	if m[k-x] and x!= k-x:
		ans = min(ans, max(m[x], m[k-x]))
print -1 if ans == sys.maxint else ans