def test():
	x, y = [int(v) for v in input().split(' ')]
	
	s = 0
	terms = 0
	while True:
		if (x % 2) != 0:
			s += x
			terms += 1
		x += 1
		
		if terms == y:
			break
	print(s)

n_tests = int(input())
for _ in range(n_tests):
	test()