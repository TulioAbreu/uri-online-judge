import datetime as dt

def main():
    diaEntrada = int(input().split(' ')[-1])
    horarioEntrada = [int(value) for value in input().split(':')]
    date1 = dt.datetime(2000, 1, diaEntrada, horarioEntrada[0], horarioEntrada[1], horarioEntrada[2])

    diaSaida = int(input().split(' ')[-1])
    horarioSaida = [int(value) for value in input().split(':')]
    date2 = dt.datetime(2000, 1, diaSaida, horarioSaida[0], horarioSaida[1], horarioSaida[2])

    totalSeconds = (date2-date1).total_seconds()

    dias = totalSeconds // 86400
    totalSeconds = totalSeconds % 86400

    horas = totalSeconds // 3600
    totalSeconds = totalSeconds % 3600

    minutos = totalSeconds // 60
    segundos = totalSeconds % 60

    print("%d dia(s)" % dias)
    print("%d hora(s)" % horas)
    print("%d minuto(s)" % minutos)
    print("%d segundo(s)" % segundos)

if __name__ == "__main__":
    main()