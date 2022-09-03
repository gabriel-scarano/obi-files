/*
    OBI - NÍVEL SÊNIOR - 2020 - FASE 3 - APLICATIVO DE CALORIAS
                                                                */

#include <stdio.h>
#include <math.h>

int main () {
    int E1, E2, E3, X;

    scanf("%d %d %d %d", &E1, &E2, &E3, &X);

    if (fabs(E1 - E2) <= X) {
        printf("%d", E2);
    } else {
        printf("%d", E3);
    }

    return 0;
}