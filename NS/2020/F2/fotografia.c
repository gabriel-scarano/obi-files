#include <stdio.h>

int main()
{
    int A, L, N, X, Y, M = -1, menor = 40001;
    int i;

    scanf("%d %d", &A, &L);
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);

        if ((A <= X && L <= Y) || (L <= X && A <= Y))
        {
            if (X * Y - A * L < menor)
            {
                menor = X * Y - A * L;
                M = i;
            }
        }
    }

    printf("%d", M);

    return 0;
}