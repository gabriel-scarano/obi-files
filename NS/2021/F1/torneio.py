count = 0

for i in range(6):
    C = input()

    if C == 'V':
        count += 1

if count == 0:
    print(-1)
elif count == 1 or count == 2:
    print(3)
elif count == 3 or count == 4:
    print(2)
elif count == 5 or count == 6:
    print(1)