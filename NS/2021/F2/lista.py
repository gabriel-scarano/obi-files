def palindromo (n, l):
    for i in range(n//2):
        if l[i] != l[n-1-i]:
            return False

    return True

count = 0

N = int(input())
L = [int(i) for i in input().split()]



while not palindromo(N, L):
    for j in range(N//2):
        if L[j] != L[N-1-j]:
            if L[j] < L[N-1-j]:
                L[j] += L[j+1]
                L.pop(j+1)
            else:
                L[N-1-j] += L[N-2-j]
                L.pop(N-2-j)

            N -= 1
            count += 1

print(count)