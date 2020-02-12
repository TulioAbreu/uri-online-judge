#URI - Test
def readInt():
    try:
        intVar = int(input())
        return intVar
    except ValueError:
        pass
    return None

def dia():
    feedBacks = readInt()
    for i in range(feedBacks):
        number = readInt()
        if number == 1:
            print('Rolien')
        elif number == 2:
            print('Naej')
        elif number == 3:
            print('Elehcim')
        elif number == 4:
            print('Odranoel')

dias = readInt()
for i in range(0, dias):
    dia()
