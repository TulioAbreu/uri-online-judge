input()
t = [int(v) for v in input().split(' ')]

smallest_index = 0
smallest_value = t[smallest_index]

for i, value in enumerate(t):
    if value < smallest_value:
        smallest_value = value
        smallest_index = i

smallest_index += 1

print(smallest_index)
