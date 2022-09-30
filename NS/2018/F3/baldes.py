res = []

N, M = map(int, input().split())
X = [int(i) for i in input().split()]

mat = [[] for _ in range(N+1)]

i = 1
for x in X:
    mat[i].append(x)
    i += 1

for i in range(M):
    T, A, B = map(int, input().split())

    if T == 1:
        mat[B].append(A)
    elif T == 2:
        maior = []
        menor = []
        
        for i in range(A, B+1, 1):
            maior.append(max(mat[i]))
            menor.append(min(mat[i]))

        i = 0
        ind_max = 0 
        G = 0
        P = 1000001
        for x in maior:
            if x > G:
                G = x
                ind_max = i

            i += 1

        i = 0
        for x in menor:
            if x < P and i != ind_max:
                P = x

            i += 1

        res.append(G - P)
        

for x in res:
    print(x)
