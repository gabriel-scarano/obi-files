/*
    OBI - NÍVEL 1 - 2008 - FASE 1 - OBI
                                        */

#include <stdio.h>

int main () {
    int N, P, X, Y;
    int i, count = 0;

    scanf("%d %d", &N, &P);

    for (i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);

        if (X + Y >= P)
            count++;
    }

    printf("%d", count);

    return 0;
}