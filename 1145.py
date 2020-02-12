x, y = [int(v) for v in input().split(' ')]

c = 0
lists = [[]]
for i in range(1, y+1):
	if c == x:
		c = 0
		lists.append([])

	lists[-1].append(str(i))
	c += 1


out = "\n".join([' '.join(l) for l in lists])
print (out)