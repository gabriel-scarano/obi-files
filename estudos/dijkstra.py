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
        # "start" our node as -1 (so we don't have a start node yet)
        u = -1
        # loop through all the nodes to check for visitation status
        for i in range(n):
            # if the node 'i' hasn't been visited and
            # we haven't processed it or the distance we have for it is less
            # than the distance we have to the "start" node
            if not visited[i] and (u == -1 or dist[i] < dist[u]):
                u = i
        # all the nodes have been visited or we can't reach this node
        if dist[u] == Inf:
            break
        # set the node as visited
        visited[u] = True
        # compare the distance to each node from the "start" node
        # to the distance we currently have on file for it
        for v, l in graph[u]:
            if dist[u] + l < dist[v]:
                dist[v] = dist[u] + l
    return dist

graph = {}

N, M = map(int, input().split())

for i in range(N):
    graph[i] = []

for i in range(M):
    A, B, T = map(int, input().split())
    A -= 1
    B -= 1
    var = graph[A]
    var.append((B, T))
    graph[A] = var

print(graph)
print(dijkstra(graph, 0))
    