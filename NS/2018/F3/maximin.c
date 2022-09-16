/*
    OBI - NÍVEL SÊNIOR - 2018 - FASE 3 - MAXIMIN 
                                                */

#include <stdio.h>

int retorna_menor(int x, int n, int vet[100000]);

int main () {
    int N, L, R, A[100000];
    int i, j;

    scanf("%d %d %d", &N, &L, &R);

    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (i = L; i <= R; i++) {
        retorna_menor(i, N, A);
    }

    return 0;
}

int retorna_menor(int x, int n, int vet[100000]) {
    int i = 0, menor;
    
    printf("\n=====================");
    for (i = 0; i < n; i++) {
        printf("\n%d", x - vet[i]);
    }
    

    return 0;
}