/*
    OBI - NÍVEL SÊNIOR - 2019 - FASE 3 - ETIQUETAS 
                                                    */

#include <stdio.h>
#define MAX 10001

int main () {
    int N, K, C, E[10001];
    int i, j, k, ind_i, ind_f, soma, menor;

    scanf("%d %d %d", &N, &K, &C);

    for (i = 1; i <= N; i++)
        scanf("%d", &E[i]);

    for (k = 0; k < K; k++) {
        for (i = 1; i <= N-C+1; i++) {
            soma = 0;
            for (j = i; j < i+C; j++)
                soma += E[j];
            
            if (i == 1) {
                menor = soma;
                ind_i = i;
                ind_f = i+C-1;
            } else if (soma < menor) {
                menor = soma;
                ind_i = i;
                ind_f = i+C-1;
            }        
        }

        for (i = ind_i; i <= ind_f; i++)
            E[i] = MAX;
    }

    soma = 0;
    for (i = 1; i <= N; i++)
        if (E[i] != MAX)
            soma += E[i];

    printf("%d", soma);

    return 0;
}