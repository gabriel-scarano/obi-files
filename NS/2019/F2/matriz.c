#include <stdio.h>
#include <stdlib.h>

int verifica_matriz (int **m, int width, int length, int L, int C);

int main (void)
{   int **mat, L, C, V;
    int i, j, achou = 1;

    scanf("%d %d", &L, &C);

    mat = malloc(L * sizeof(int));

    for (i = 0; i < L; i++)
        mat[i] = malloc(C * sizeof(int));

    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
        

    /*for (i = 2; i <= L; i++)
        for (j = 2; j <= C; j++)
            if (V = !verifica_matriz(mat, i, j))
                achou = V; i = L+1; j = C+1;*/

    verifica_matriz(mat, 2, 3, L, C);

    

}

int verifica_matriz (int **m, int width, int length, int L, int C)
{   int i, j, k, l;

    for (k = 0; k < L-1; k++)
    { 
        for (l = 0; l < C-1; l++)
        { printf("==============\n");
            for (i = k; i < width+k; i++)
        {   for (j = l; j < length+l; j++)
            {
                printf("%d %d\n", i, j);
            }
        }
        }
        
    }
    
    

    return 0;

}