##
##    OBI - NÍVEL JÚNIOR - 2008 - FASE 2 - AÇÕES DA BOLSA
##               

maior_lucro = -101

N = int(input())

X = [int(i) for i in input().split()]

for i in range(N-3):
    soma = X[i] + X[i+1] + X[i+2] + X[i+3]

    if soma > maior_lucro:
        maior_lucro = soma

print(maior_lucro)