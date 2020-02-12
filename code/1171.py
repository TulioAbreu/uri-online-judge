qt_valores = int(input())
mapa = [0] * 2001
for _ in range(qt_valores):
    valor = int(input())
    mapa[valor] += 1

for i, v in enumerate(mapa):
    if v > 0:
        print("%d aparece %d vez(es)" % (i, v))