def solveProblem():
    line = input()
    lineChunks = line.split(" ")
    values = [float(chunk) for chunk in lineChunks]
    return round((2*values[0] + 3*values[1] + 5*values[2])/10, 1)

numTestes = int(input())
for i in range(numTestes):
    print(solveProblem())
