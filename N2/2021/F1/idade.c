#include <stdio.h>

int main ()
{   int N[3], i, j, aux;

    scanf("%d %d %d", &N[0], &N[1], &N[2]);

    for (i = 0; i < 2; i++)
        for (j = i+1; j < 3; j++)
            if (N[j] < N[i])
            {   aux = N[j];
                N[j] = N[i];
                N[i] = aux;
            }

    printf("%d", N[1]);

    return 0;
}