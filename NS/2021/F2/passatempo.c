#include <stdio.h>
#include <string.h>

int main () {
    char mat[100][100][3], ant[3];
    int L, C, soma_linha[100], soma_coluna[100];
    int i, j, achou = 0, linha, coluna;

    scanf("%d %d", &L, &C);

    for (i = 0; i < L; i++)
    {   for (j = 0; j < C; j++)
            scanf("%s", mat[i][j]);

        scanf("%d", &soma_linha[i]);
    }
    for (i = 0; i < C; i++)
        scanf("%d", &soma_coluna[i]);

    for (i = 0; i < L && achou == 0; i++) {
        achou = 1;
        for (j = 0; j < C; j++)
        {
            if (j == 0)
                strcpy(ant, mat[i][j]);
            else if (strcmp(ant, mat[i][j]) != 0)
                achou = 0;
        }

        if (achou )
        {   linha = i;
            i = L;

        }
    }

    for (i = 0; i < C && achou == 0; i++) {
        achou = 1;
        for (j = 0; j < L; j++)
        {
            if (j == 0)
                strcpy(ant, mat[i][j]);
            else if (strcmp(ant, mat[i][j]) != 0)
                achou = 0;
        }

        if (achou == 1)
            coluna = i;
    }

    printf("%d", coluna);



    
    
    printf("%d", achou);

    return 0;
}