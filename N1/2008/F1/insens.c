/*
    OBI - NÍVEL 1 - 2008 - FASE 1 - INSENSIBILIDADE
                                                    */

#include <stdio.h>
#include <math.h>

int main (void) {
    int N, X1, Y1, X2, Y2;
    int i;
    int dist = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        dist += (X2 - X1) * (X2-X1) + (Y2 - Y1) * (Y2 - Y1);
    }

    printf("%d", dist);
}