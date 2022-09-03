/*
    OBI - NÍVEL SÊNIOR - 2020 - FASE 3 - CANDIDATAS
                                                    */

#include <stdio.h>
#define MAX 1000000001

int opcao2 (int ini, int fin, int S[100001]);

int main () {
    int N, M, T, A, B, resp[100000], ind = -1;
    int S[100001];
    int i;

    scanf("%d %d", &N, &M);

    for (i = 1; i <= N; i++)
        scanf("%d", &S[i]);

    for (i = 0; i < M; i++) {
        scanf("%d %d %d", &T, &A, &B);

        if (T == 1) {
            S[A] = B;
        } else if (T == 2) {
            ind++;
            resp[ind] = opcao2(A, B, S);
        }
    }

    for (i = 0; i <= ind; i++)
        printf("%d\n", resp[i]);

    return 0;
}

int opcao2 (int ini, int fin, int S[100001]) {
    int i, j, k, l, menor, achou, mdc, count = 0;
    
    for (i = ini; i <= fin; i++) {
        for (j = i; j <= fin; j++) {
            menor = MAX;

            for (k = i; k <= j; k++)
                if (S[k] < menor)
                    menor = S[k];

            for (k = menor; k >= 1; k--) {
                achou = 1;
                for (l = i; l <= j; l++) {
                    if (S[l] % k != 0) {
                        achou = 0;
                        l = j+1;
                    }
                }

                if(achou == 1) {
                    mdc = k;
                    k = 0;
                }
            }

            if (mdc > 1) {
                count++;
            }            
        }
    }

    return count;
}
