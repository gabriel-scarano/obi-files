#include <stdio.h>

int Dijkstra(int Grafo[MAX][MAX], int n, int comeco)
{
    int custo[MAX][MAX], distance[MAX], pred[MAX], visited[MAX];
    int i, j, count, mindistance, nextnode;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (Grafo[i][j] == 0)
            {
                custo[i][j] = INF;
            }
            else
            {
                custo[i][j] = Grafo[i][j];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        distance[i] = custo[comeco][i];
        pred[i] = comeco;
        visited[i] = 0;
    }

    distance[comeco] = 0;
    visited[comeco] = 1;
    count = 1;

    while (count < n - 1)
    {
        mindistance = INF;

        for (i = 0; i < n; i++)
        {
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        }

        visited[nextnode] = 1;

        for (i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (mindistance + custo[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + custo[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }

        count++;
    }

    return distance[i - 1];
}

int main()
{

    return 0;
}