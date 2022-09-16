#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encontra_cadeia(char **S, int ind);

int main () {
    int N;
    char **cadeia;
    int i, achou = -1;

    scanf("%d", &N);

    cadeia = (char *) malloc(N * sizeof(char));
    for (i = 0; i < N; i++)
        cadeia[i] = (char *) malloc(11 * sizeof(char));

    for (i = 0; i < N; i++) 
        scanf(" %[^\n]s", cadeia[i]);

    for (i = 1; i < N && achou == -1; i++)
        if(encontra_cadeia(cadeia, i))
            achou = i;

    if (achou == -1)
        printf("ok");
    else
        printf("%s", cadeia[achou]);

    return 0;
}

int encontra_cadeia(char **S, int ind) {
    int i, j;
    char copy[22];

    for (i = 0; i < ind; i++) 
    {   for (j = 0; j < ind; j++)
        {   if (i != j) {
                strcpy(copy, S[i]);
                strcat(copy, S[j]);

                if (strstr(copy, S[ind]) != NULL)
                    return ind;
            }
        }
    }

    return -1;
}