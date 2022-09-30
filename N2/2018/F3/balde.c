#include <stdio.h>

typedef struct balde
{
    int maior;
    int menor;
} Baldes;

int main()
{   Baldes baldes[10000];
    int N, M, L, i, j, T, A, B, ind_maior, maior, menor, achou = 0, res[100000], ind_res = 0;


    scanf("%d %d", &N, &M);

    for (i = 1; i <= N; i++)
    {   scanf("%d", &L);
        baldes[i].maior = L;
        baldes[i].menor = L;
    }

    for (j = 0; j < M; j++)
    {   scanf("%d %d %d", &T, &A, &B);
        
        if (T == 1)
        {   if (A > baldes[B].maior)
                baldes[B].maior = A;
            else if (A < baldes[B].menor)
                baldes[B].menor = A;
        } else
        {   for (i = A; i <= B; i++)
            {   if (i == A)
                {   ind_maior = A;
                    maior = baldes[A].maior;
                } else
                {   if (baldes[i].maior > maior)
                    {   ind_maior = i;
                        maior = baldes[i].maior;
                    }
                }
            }

            for (i = A; i <= B; i++)
            {   if (i != ind_maior && !achou)
                {   menor = baldes[i].menor;
                    achou = 0;
                } else if (achou && i != ind_maior && baldes[i].menor < menor)
                {
                    menor = baldes[i].menor;
                }
            }

            res[ind_res] = maior - menor;
            ind_res++;
        }

    }

    for (i = 0; i < ind_res; i++)
        printf("%d\n", res[i]);
}