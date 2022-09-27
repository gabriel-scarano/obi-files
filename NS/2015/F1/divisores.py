D = 1

N = int(input())

for i in range(1, N//2+1):
    if N % i == 0:
        D += 1

print(D)