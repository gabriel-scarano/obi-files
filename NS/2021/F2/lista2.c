#include <stdio.h>
#include <stdlib.h>

void ordena_vetor(int *vetor, int n, int pos);

int main () {
    int *lista, N, count = 0;
    int i = 0;

    scanf("%d", &N);

    lista = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
        scanf("%d", &lista[i]);

    i = 0;
    while (i != N/2) 
    {   for (i = 0; i < N/2; i++)
        {   if (lista[i] != lista[N-1-i])
            {   if (lista[i] < lista[N-1-i])
                {   lista[i] += lista[i+1];
                    lista[i+1] = -1;
                    ordena_vetor(lista, N, i+1);
                } else 
                {   lista[N-2-i] += lista[N-1-i];
                    lista[N-1-i] = -1;
                    ordena_vetor(lista, N, N-1-i);
                }
                i = 1000001;
                N--;
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}

void ordena_vetor(int *vetor, int n, int pos) {
    int i;

    for (i = pos; i < n; i++)
        vetor[i] = vetor[i+1]; 
}