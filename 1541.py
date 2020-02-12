from math import sqrt, floor

while True:
    line = input()
    if line == "0":
        break
    else:
        house_width, house_height, max_percentage = [int(v) for v in line.split(' ')]
        area = house_width*house_height

        print(int(floor(sqrt(area*100/max_percentage))))