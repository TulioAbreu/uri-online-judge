tests = int(input())
for _ in range(tests):
    triangle_height = int(input())
    triangle_total = 0
    for i in range(triangle_height):
        triangle_total += 2**i
    print(triangle_total)