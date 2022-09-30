def Dijkstra(grafo, n, comeco):
    INF = 10000000
    custo = [[] for i in range(n)]
    distance = []
    pred = []
    visited = []

    for i in range(n):
        for j in range(n):
            if grafo[i][j] == 0:
                custo[i].append(INF)
            else:
                custo[i].append(grafo[i][j])

    for i in range(n):
        distance.append(custo[comeco][i])
        pred.append(comeco)
        visited.append(False)

    distance[comeco] = 0
    visited[comeco] = True
    count = 1

    while count < n - 1:
        mindistance = INF

        for i in range(n):
            if distance[i] < mindistance and visited[i] == False:
                mindistance = distance[i]
                nextnode = i

        visited[nextnode] = True

        for i in range(n):
            if (visited[i] == False):
                if (mindistance + custo[nextnode][i] < distance[i]):
                    distance[i] = mindistance + custo[nextnode][i]
                    pred[i] = nextnode

        count += 1


    return distance[n-1]




N, M = map(int, input().split())

G = [[0 for _ in range(N)] for _ in range(N)]

for i in range(M):
    A, B, C = map(int, input().split())
    G[A-1][B-1] = C
    G[B-1][A-1] = C

print(Dijkstra(G, N, 0))