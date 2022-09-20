#include <stdio.h>

int main (void) {
    int N, X, V[100000];
    int i, ind = 0, soma = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {   scanf("%d", &X);
        if (X != 0)
        {   V[ind] = X;
            soma += X;
            ind++;
        } else
        {   soma -= V[ind-1];
            V[ind-1] = 0;
            ind--;
        }
    }

    printf("%d", soma);
    

}