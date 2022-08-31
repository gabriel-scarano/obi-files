/*
    OBI - NÍVEL SÊNIOR - 2021 - FASE 3 - FALHA NA SEGURANÇA
                                                            */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara (char S[20001][11], int x, int y);

int main () {
    int N, i, j, count = 0;
    char S[20001][11];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%s", S[i]);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j) {
                if(compara(S, i, j))
                    count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}

int compara (char S[20001][11], int x, int y) {
    int i, j, achou;

    if (strlen(S[y]) > strlen(S[x])) {
        return 0;
    } else {
        for (i = 0; i < strlen(S[x]) - strlen(S[y]) + 1; i++) {
            achou = 1;
            for (j = 0; j < strlen(S[y]); j++) {
                if (S[x][i+j] != S[y][j]) {
                    achou = 0;
                }
            }

            if (achou == 1) {
                return 1;
            }
        }
    }

    return 0;
}