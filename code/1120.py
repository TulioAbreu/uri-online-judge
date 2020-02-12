while True:
    testCase = input()
    brokenKey, value = testCase.split(' ')
    if brokenKey == "0" and value == "0":
        break
    else:
        initialValue = 0
        try:
            initialValue += int(value.replace(brokenKey, ''))
        except ValueError:
            initialValue += 0
        print(initialValue)