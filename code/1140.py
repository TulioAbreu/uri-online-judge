def is_tautogram(chunks):
    main_char = chunks[0][0]
    for chunk in chunks:
        if chunk[0] != main_char:
            return False
    return True

while True:
    line = input()

    if line == "*":
        break
    else:
        line_chunks = line.upper().split(' ')

        if is_tautogram(line_chunks):
            print("Y")
        else:
            print("N")