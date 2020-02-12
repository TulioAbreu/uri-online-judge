def problem(number1, number2):
	numbers = list(range(number1, number2+1))
	numbers_sum = "Sum=" + str(sum(numbers))

	print("%s %s" %
		(" ".join([str(i) for i in numbers]),
		numbers_sum))

while True:
	line = input().split(" ")
	number1 = int(line[0])
	number2 = int(line[1])
	if number1 <= 0 or number2 <= 0:
		break
	else:
		if number1 > number2:
			problem (number2, number1)
		else:
			problem (number1, number2)
