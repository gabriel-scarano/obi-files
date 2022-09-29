visited = set()

def dfs(visited, graph, node):
    if node not in visited:
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)


graph = {}

S, T, P = map(int, input().split())

for i in range(1, S+1, 1):
    graph[i] = []

alturas = [int(i) for i in input().split()]

for i in range(T):
    I, J = map(int, input().split())
    
    if alturas[I-1] - alturas[J-1] > 0:
        vet = graph[I]
        vet.append(J)
        graph[I] = vet
    else:
        vet = graph[J]
        vet.append(I)
        graph[J] = vet



dfs(visited, graph, P)

print(len(visited)-1)

