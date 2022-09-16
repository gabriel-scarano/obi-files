/*
    OBI - NÍVEL SÊNIOR - 2018 - FASE 3 - CINCO 
                                                */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(char D[1001]);

int main () {
    int N, achou = 0, achou1, achou2, i;
    char D[1002], D0[1002], D5[1002], aux;

    scanf("%d", &N);
    for (i = 0; i <= N; i++) {
        scanf("%c", &D[i]);

        if (D[i] == ' ')
            i--;
    }

    D[i] = '\0';

    for (i = 0; i <= N && achou == 0; i++)
        if (D[i] == '0' || D[i] == '5')
            achou = 1;

    if (achou) {
        achou1 = 0;
        for (i = 0; i < N && achou1 == 0; i++) {
            if (D[i] == '0') {
                strcpy(D0, D);
                aux = D0[i];
                D0[i] = D0[N];
                D0[N] = aux;
                achou1 = 1;
            }
        }

        achou2 = 0;
        
        for (i = 0; i < N && achou2 == 0; i++) {
            if (D[i] == '5') {
                strcpy(D5, D);
                aux = D5[i];
                D5[i] = D5[N];
                D5[N] = aux;
                achou2 = 1;
            }
        }

        if (achou1 && achou2) {
            if (atoi(D0) > atoi(D5))
                imprime(D0);
            else
                imprime(D5);
        } else if (achou1) {
            imprime(D0);
        } else if (achou2) {
            imprime(D5);
        }
    } else {
        printf("-1");
    }

    return 0;
}

void imprime(char D[1002]) {
    int i;

    for (i = 1; D[i] != '\0'; i++)
        printf("%c ", D[i]);
}