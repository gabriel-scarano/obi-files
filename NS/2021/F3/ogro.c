/*
    OBI - NÍVEL SÊNIOR - 2021 - FASE 3 - OGRO
                                                */

#include <stdio.h>

int main () {
    int N, i;

    scanf("%d", &N);

    if (N <= 5) {
        for (i = 0; i < N; i++) {
            printf("I");
        }

        printf("\n*");
    } else {
        printf("IIIII\n");

        for (i = 0; i < N-5; i++) {
            printf("I");
        }
    }

    return 0;
}