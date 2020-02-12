import math

n = []
SIZE = 20

for i in range(SIZE):
    value = int(input())
    n.append(value)

pos1 = 0
pos2 = SIZE-1
for _ in range(math.floor(SIZE/2)):
    n[pos1], n[pos2] = n[pos2], n[pos1]
    pos1 = pos1+1
    pos2 = pos2-1

for i in range(SIZE):
    print("N[%d] = %d" % (i, n[i]))