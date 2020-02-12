def get_num_leds(num):
	if num == 1:
		return 2
	elif num == 2:
		return 5
	elif num == 3:
		return 5
	elif num == 4:
		return 4
	elif num == 5:
		return 5
	elif num == 6:
		return 6
	elif num == 7:
		return 3
	elif num == 8:
		return 7
	elif num == 9:
		return 6
	elif num == 0:
		return 6

tests = int(input())
for _ in range(tests):
	nums = input()
	leds_count = 0
	
	for num in nums:
		leds_count += get_num_leds(int(num))

	print("%d leds" % leds_count)