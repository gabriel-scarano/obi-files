def Dijkstra(grafo, n, comeco):
    INF = 10000000
    custo = [[] for i in range(n)]
    distance = []
    pred = []
    visited = []

    for i in range(n):
        if i in grafo[comeco]:
            distance.append(grafo[comeco][i])
        else:
            distance.append(INF)

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
            if (visited[i] == False and i in grafo[nextnode]):
                if mindistance + grafo[nextnode][i] < distance[i]:
                    distance[i] = mindistance + grafo[nextnode][i]
                    pred[i] = nextnode

        count += 1


    return distance[n-1]




N, M = map(int, input().split())

G = {}
for i in range(N):
    G[i] = {}

for i in range(M):
    A, B, C = map(int, input().split())
    G[A-1][B-1] = C
    G[B-1][A-1] = C

print(G)

print(Dijkstra(G, N, 0))