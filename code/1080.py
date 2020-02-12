numbers = list()
for i in range(100):
    numbers.append(int(input()))
maxValue = max(numbers)
print(maxValue)
print(numbers.index(maxValue)+1)