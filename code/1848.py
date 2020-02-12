caw_caw_counter = 0
current_eyes_sequence = "0"
s = 0

def winks2int(winks_sequence):
    binary_sequence = '0'
    for wink in winks_sequence:
        if wink == '-':
            binary_sequence += '0'
        else:
            binary_sequence += '1'
    return int(binary_sequence, 2)

while True:
    line = input()
    if line == "caw caw":
        caw_caw_counter += 1
        print(s)
        s = 0
        if caw_caw_counter >= 3:
            break
    else:
        s += winks2int(line)