#include <stdio.h>
#include <stdlib.h>

int count_marks(int **m, int ini, int fin);
int soma(int **s, int ini, int fin);

int main ()
{   int N, L, H, **S, **M;
    int i, j, sum = 0, r, maior = -2000001;

    scanf("%d %d %d", &N, &L, &H);

    S = malloc(N * sizeof(int));
    M = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
        scanf("%d", &S[i]);

    for (i = 0; i < N; i++)
        scanf("%d", &M[i]);

    for (j = L; j <= N; j++)
    {
        for (i = 0; i < N-j+1; i++)
        {   r = count_marks(M, i, i+j-1);
            if (r >= L && r <= H)
            {   sum = soma(S, i, i+j-1);
                if (sum > maior )
                    maior = sum;
            }
               
        }
    }

    printf("%d", maior);


}

int count_marks(int **m, int ini, int fin)
{   int i, count = 0;

    for (i = ini; i <= fin; i++)
        if (m[i])
            count++;

    return count;
}

int soma(int **s, int ini, int fin)
{   int i, soma = 0;

    for (i = ini; i <= fin; i++)
        soma += (int) s[i];

    return soma;
}
