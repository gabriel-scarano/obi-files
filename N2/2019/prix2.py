graph = {}
visited = set()

def dfs(visited, graph, node):
    if node not in visited:
        print(node)
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)

N, M = map(int, input().split())

for i in range(1, N+1, 1):
    graph[i] = []

for i in range(M):
    U, L, R = map(int, input().split())
    
    for j in range(L, R+1, 1):
        vet = graph[U]
        vet.append(j)
        graph[U] = vet


dfs(visited, graph, 1)
print(graph)

