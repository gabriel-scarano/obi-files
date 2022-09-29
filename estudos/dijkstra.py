# takes the graph and the starting node
# returns a list of distances from the starting node to every other node
def dijkstra(graph, root):
    n = len(graph)
    Inf = 10000000000
    # initialize distance list as all infinities
    dist = [Inf for _ in range(n)]
    # set the distance for the root to be 0
    dist[root] = 0
    # initialize list of visited nodes
    visited = [False for _ in range(n)]
    # loop through all the nodes
    for _ in range(n):
        u = -1
        for i in range(n):
            if not visited[i] and (u == -1 or dist[i] < dist[u]):
                u = i
        if dist[u] == Inf:
            break

        visited[u] = True
        
        for v, l in graph[u]:
            if dist[u] + l < dist[v]:
                dist[v] = dist[u] + l
    return dist

graph = {}

N = int(input())

for i in range(N):
    graph[i] = []

for i in range(N * (N-1) // 2):
    A, B, T = map(int, input().split())
    A -= 1
    B -= 1
    var = graph[A]
    var.append((B, T))
    graph[A] = var

print(graph)
print(dijkstra(graph, 2))
    