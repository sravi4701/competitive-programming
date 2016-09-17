knows=raw_input()
words=[raw_input() for i in xrange(input())]
for i in xrange(len(words)):
	ans="Yes"
	for j in xrange(len(words[i])):
		if(words[i][j] not in knows):
			ans="No"
			break;
	print ans