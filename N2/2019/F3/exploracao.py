T = {}
visited = []
count = 0

N, P, Q = map(int, input().split())

for i in range(N):
    X, Y = map(float, input().split())
    T[i] = [X, Y]
    visited.append(0)

for i in range(0, N-1, 1):
    for j in range(i+1, N, 1):
        if (T[i][1]-T[j][1]) / (T[i][0]-T[j][0]) >= (P/Q):
            count += 1

print(count)
    
