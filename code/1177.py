v = []
c_max = int(input())
c = 0
for i in range(1000):
    print("N[%s] = %s"% (i, c))
    c += 1

    if c == c_max:
        c = 0