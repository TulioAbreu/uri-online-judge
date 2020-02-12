in_arr = [int(val) for val in input().split(' ')]
in_arr = sorted(in_arr)
A, B, C, D = in_arr

if D < C + B:
    print('S')
elif C < B + A:
    print('S') 
else:
    print('N')