'''input
3
3 2
1 2
2 3
4 3
1 2
2 3
2 4
6 7
1 2
1 3
2 3
2 4
4 5
4 6
5 6
'''

from itertools import combinations

pair = None
n = None
I = lambda : map(int, raw_input().split())
def contra(a):
	a = list(a)
	for i in xrange(len(a)):
		for j in xrange(i+1,len(a)):
			if not pair[a[i]][a[j]]:
				return 1
	return 0


def solve():
	friends = range(1,n+1)
	for x in xrange(n+1):
		for comb in combinations(friends, x):
			first = set(comb)
			# print "first:",first
			second = set(s for s in friends if s not in first)
			# print "second:",second
			f1 = contra(first)

			f2 = contra(second)
			if not f1 and not f2:
				return 1
	return 0
import pprint
for _ in xrange(input()):
	n, m = I()
	pair = [[0 for i in xrange(n+1)]for j in xrange(n+1)]
	for i in xrange(m):
		x, y = I()
		pair[x][y] = 1
		pair[y][x] = 1
	# pprint.pprint(pair)
	print "YES" if solve() else "NO"

