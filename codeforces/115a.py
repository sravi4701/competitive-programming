'''input
12
-1
1
2
3
-1
5
6
7
-1
9
10
11
'''

from collections import defaultdict

G = defaultdict(list)
man = defaultdict(int)
visited = defaultdict(int)

def dfs(i):
	# print "dfsing for ",i
	if not G[i]:
		# print "returning",1
		return 1
	res = 0
	for child in G[i]:
		if not visited[child]:
			visited[child] = 1
			res = max(res, dfs(child))
	# print "returnign",res
	return res+1

n = input()

tovisit = []

for i in xrange(1,n+1):
	temp = input()
	man[i] = temp
	if (temp != -1):
		G[temp].append(i)
	else:
		tovisit.append(i)

ans = 0
# print G
# for i in xrange(1,n+1):
# 	if not visited[i]:
# 		visited[i] = 1
# 		ans = max(ans, dfs(i))
# 		# pprint(visited)
for s in tovisit:
	ans = max(ans, dfs(s))

print ans
