def readInt():
    try:
        intVar = int(input())
        return intVar
    except ValueError:
        pass
    return None

number1 = readInt()
number2 = readInt()

print(number1 - number2)