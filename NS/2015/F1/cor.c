#include <stdio.h>
#include <stdlib.h>
#define AST -6

int main ()
{   int M[1001][1001];
    int i, j, N, ind = 0, achou = 1;
    char c;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {   for (j = 0; j < N; j++)
        {   scanf(" %c", &c);
            M[i][j] = c - '0';
        }
    }

    while (achou)
    {   achou = 0;

        for (i = 0; i < N; i++)
        {   for (j = 0; j < N; j++)
            {   if (M[i][j] == ind)
                {
                    if (i+1 < N && M[i+1][j] == AST)
                        M[i+1][j] = ind+1;

                    if (i-1 >= 0 && M[i-1][j] == AST)
                        M[i-1][j] = ind+1;

                    if (j+1 < N && M[i][j+1] == AST)
                        M[i][j+1] = ind+1;

                    if (j-1 >= 0 && M[i][j-1] == AST)
                        M[i][j-1] = ind+1;
                }
            }
        }

        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                if (M[i][j] == AST)
                    achou = 1; i = N; j = N;

        ind++;

        if (ind == 10)
            ind = 9;
    }

    for (i = 0; i < N; i++)
    {   for (j = 0; j < N; j++)
            if (M[i][j] != AST)
                printf("%d", M[i][j]);
            else
                printf("*");

        printf("\n");
    }
    return 0;
}