graph = {}

N, M = map(int, input().split())

for i in range(1, N+1, 1):
    graph[i] = []

for i in range(M):
    U, L, R = map(int, input().split())

    for i in range(L, R+1, 1):
        vet = graph[U]
        vet.append(i)
        graph[U] = vet

    print(graph[U])