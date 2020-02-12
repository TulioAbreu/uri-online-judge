def read_value():
	return float(input())

arr = []
for _ in range(100):
	arr.append(read_value())

for i, value in enumerate(arr):
	if value <= 10:
		print("A[%d] = %.1f" % (i, value))