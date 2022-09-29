C = {}
Q = {}

N, M = map(int, input().split())

for i in range(1, N+1, 1):
    C[i] = []

for i in range(1, M+1, 1):
    Q[i] = []

for i in range(1, N, 1):
    A, B = map(int, input().split())
    
    vet = C[A]
    vet.append(B)
    C[A] = vet

    vet = C[B]
    vet.append(A)
    C[B] = vet

for i in range(1, M, 1):
    A, B = map(int, input().split())
    
    vet = Q[A]
    vet.append(B)
    Q[A] = vet

    vet = Q[B]
    vet.append(A)
    Q[B] = vet

print(C)
print(Q)
