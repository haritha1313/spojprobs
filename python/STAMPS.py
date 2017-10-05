#########################################
#
#	achie27
#	AC, lel
#
#########################################

t=int(raw_input())

for i in xrange(1, t+1):
	a=raw_input()
	tot, l = map(int, a.split())
	b=sorted(map(int, raw_input().split()))
	sum, j=0, 0
	while sum<tot and j<l:
		sum+=b[l-1-j]
		j+=1

	if sum<tot:
		print "Scenario #%d:\nimpossible"%i
	else:
		print "Scenario #%d:\n%d"%(i, j)