def read_integer():
	return int(input())

x = read_integer()
while True:
	z = read_integer()
	
	if z > x:
		break

s = 0
n_terms = 0
current_num = x
while True:
	s += current_num
	current_num += 1
	n_terms += 1

	if s > z:
		break

print(n_terms)