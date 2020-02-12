import math

def program():
    line = input()
    newLine = ""
    for i in range(0, len(line)):
        if (line[i].isalpha()):
            newLine += chr(ord(line[i]) + 3)
        else:
            newLine += line[i]
    line = newLine[::-1]
    newLine = line[0:(math.floor(len(line) / 2))]
    for i in range(math.floor(len(line) / 2), len(line)):
        newLine += chr(ord(line[i]) - 1)
    print(newLine)

def main():
    exec_times = int(input())
    for i in range(0, exec_times):
        program()

if __name__ == "__main__":
    main()