/*
    OBI - NÍVEL SÊNIOR - 2019 - FASE 3 - COMPUTADOR 
                                                    */

#include <stdio.h>
#include <stdlib.h>

void frente(int *vet, int N, int I, int V);
void tras(int *vet, int I, int V);

int main () {
    int N, M, O, I, V, res[200000], ind = 0;
    int *vet;
    int j;

    scanf("%d %d", &N, &M);

    vet = malloc((N+1) * sizeof(int));

    for (j = 1; j <= N; j++)
        vet[j] = 0;
    
    for (j = 0; j < M; j++) {
        scanf("%d", &O);

        switch (O) {
            case 1:
                scanf("%d %d", &I, &V);
                frente(vet, N, I, V);
                break;

            case 2:
                scanf("%d %d", &I, &V);
                tras(vet, I, V);
                break;

            case 3:
                scanf("%d", &I);
                res[ind] = vet[I];
                ind++;
                break;
        }
    }

    for (j = 0; j < ind; j++)
        printf("%d\n", res[j]);

    free(vet);

    return 0;
}

void frente(int *vet, int N, int I, int V) {
    int i, ini = 0;

    for (i = I; i <= N; i++)
        if (V-ini > 0) {
            vet[i] += V-ini;
            ini++;
        } else {
            i = N+1;
        }
}

void tras(int *vet, int I, int V) {
    int i, ini = 0;

    for (i = I; i >= 1; i--)
        if (V-ini > 0) {
            vet[i] += V-ini;
            ini++;
        } else {
            i = 0;
        }
}
