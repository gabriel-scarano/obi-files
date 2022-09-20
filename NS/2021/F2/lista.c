#include <stdio.h>
#include <stdlib.h>

int palindromo(int N, int *L);

int main () {
    int N, *L;
    int i, j, k, count = 0, ind;

    scanf("%d", &N);

    L = malloc(N * sizeof(N));

    for (i = 0; i < N; i++)
        scanf("%d", &L[i]);

    while (!palindromo(N, L))
    {   for (i = 0; i < N/2; i++)
        {   if (L[i] != L[N-1-i])
            {   if  (L[i] < L[N-1-i])
                {   L[i] += L[i+1]; 
                    L[i+1] = -1;
                    ind = i+1;
                } else
                {   L[N-1-i] += L[N-2-i]; 
                    L[N-2-i] = -1;
                    ind = N-2-i;
                }

                for (j = ind; j < N-1; j++)
                {
                  L[j] = L[j+1];
                }
                count++;
                N--;              
                i = N/2;                               
            }
        }

    }

    free(L);
    
    printf("%d", count);   
    
    return 0;
}

int palindromo(int N, int *L) {
    int i;

    for (i = 0; i < N/2; i++)
        if (L[i] != L[N-1-i])
            return 0;

    return 1;
}