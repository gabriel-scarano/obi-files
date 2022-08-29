#include <stdio.h>
#define INF 10000000
#define MAX 101

int Dijkstra(int Grafo[MAX][MAX], int n, int comeco);

int main () {
    int N, M, A, B, C;
    int G[MAX][MAX];
    int i, j;

    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++) {
        for (j = 1; j <= N; j++) {
            G[i][j] = 0;
        }
    }

    for (i = 0; i < M; i++) {
        scanf("%d %d %d", &A, &B, &C);
        G[A-1][B-1] = C;
        G[B-1][A-1] = C;
    }

    printf("======= GRAFO ==========");
    for (i = 0; i < N; i++) {
        printf("\n");
        for (j = 0; j < N; j++) {
            printf("%d ", G[i][j]);
        }
    }

    printf("%d", Dijkstra(G, N, 0));

    return 0;
}

int Dijkstra(int Grafo[MAX][MAX], int n, int comeco) {
    int custo[MAX][MAX], distance[MAX], pred[MAX], visited[MAX];
    int i, j, count, mindistance, nextnode;
    
    // Matriz de custo
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (Grafo[i][j] == 0) {
                custo[i][j] = INF;
            } else {
                custo[i][j] = Grafo[i][j];
            }
        }
    }

    for (i = 0; i < n; i++) {
        distance[i] = custo[comeco][i];
        pred[i] = comeco;
        visited[i] = 0;
    }

    distance[comeco] = 0;
    visited[comeco] = 1;
    count = 1;

    while (count < n - 1) {
        mindistance = INF;

        for (i = 0; i < n; i++) {
            if (distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }
        }

        visited[nextnode] = 1;

        for (i = 0; i < n; i++) {
            if (!visited[i]) {
                if (mindistance + custo[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + custo[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }

        count++;
    }

    return distance[i-1];
}