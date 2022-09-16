/*
    OBI - NÍVEL SÊNIOR - 2018 - FASE 3 - BOLAS 
                                                */

#include <stdio.h>

int main () {
    int bolas[10] = { 0 };
    int i, N, achou = 0;

    for (i = 0; i < 8; i++) {
        scanf("%d", &N);
        bolas[N] += 1;
    }

    for (i = 0; i < 10 && achou == 0; i++)
        if (bolas[i] >= 5)
            achou = 1;

    if (achou)
        printf("N");
    else
        printf("S");

    return 0;
}