tests = int(input())
for _ in range(tests):
	line = input()
	values = [int(v) for v in line.split(' ')]
	values.sort()
	x, y = values
	
	s = 0
	for i in range(x+1, y):
		if (i % 2) != 0:
			s += i
	print(s)