for i in xrange(input()):
	raw_input()
	eq=raw_input().split()
	if('m' in eq[4]):
		eq[4]=str(int(eq[0])+int(eq[2]))
	elif('m' in eq[0]):
		eq[0]=str(int(eq[4])-int(eq[2]))
	else:
		eq[2]=str(int(eq[4])-int(eq[0]))
	print ' '.join(eq)
