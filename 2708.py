def get_input():
    cars = {
        "went": 0,
        "back": 0
    }
    people = {
        "went": 0,
        "back": 0
    }
    while True:
        line = input()
        if line == 'ABEND':
            break
        else:
            car_str, ppl_str= line.split(' ')
            ppl = int(ppl_str)
            if car_str == 'SALIDA':
                cars["went"] += 1
                people["went"] += ppl
            elif car_str == 'VUELTA':
                cars["back"] += 1
                people["back"] += ppl
    return (cars, people)

def main():
    cars, people = get_input()
    print(people["went"]-people["back"])
    print(cars["went"]-cars["back"])

if __name__ == "__main__":
    main()