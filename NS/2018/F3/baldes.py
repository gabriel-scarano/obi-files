##
##  OBI - NÍVEL SÊNIOR - 2018 - FASE 3 - BALDES 
##                                               

res = []

N, M = [int(i) for i in input().split()]

baldes = [[] for y in range(N+1)]

L = [int(i) for i in input().split()]

i = 1
for x in L:
    baldes[i].append(x)
    i += 1

for i in range(M):
    L = [int(i) for i in input().split()]

    if L[0] == 1:
        baldes[L[2]].append(L[1])
    elif L[0] == 2:
        dif = -1
        i = L[1]
        while i <= L[2]:
            j = L[1]
            while j <= L[2]:
                if i != j:
                    if (max(baldes[i]) - min(baldes[j]) > dif):
                        dif = max(baldes[i]) - min(baldes[j])

                j += 1 
            
            i += 1

        res.append(dif)

for x in res:
    print(x)
