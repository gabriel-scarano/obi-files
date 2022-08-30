/*
    OBI - NÍVEL JÚNIOR - 2008 - FASE 2 - MINI-CALCULADORA
                                                            */
#include <stdio.h>

int main (void) {
    int N, D, Q;
    int i;

    scanf("%d %d %d", &N, &D, &Q);

    if (D == Q) {
        printf("1 1");
    } else for (i = Q; i >= 1; i--) {
        if (D % i == 0 && Q % i == 0 && D/i <= N && Q/i <= N) {
            printf("%d %d", D/i, Q/i);
            i = -1;
        }
    }

    if (i == 0) {
        printf("IMPOSSIVEL");
    }
}