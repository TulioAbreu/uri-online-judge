def program(value):
    values = [value, pow(value, 2), pow(value, 3)]
    values2 = [values[0], values[1]+1, values[2]+1]
    print("%d %d %d\n%d %d %d" % (
        values[0],
        values[1],
        values[2],
        values2[0],
        values2[1],
        values2[2],
    ))

def main():
    limit = int(input())
    for i in range(1, limit+1):
        program(i)

if __name__ == "__main__":
    main()