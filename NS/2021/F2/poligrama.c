#include <stdio.h>
#include <string.h>

int main ()
{
    int N, i, j;
    char P[100001], R[50001], ant[50001];

    R[0] = '*';
    R[1] = '\0';

    scanf("%d", &N);
    scanf("%s", P);

    for (i = N/2; i >= 1; i++)
    {
        if (N % i == 0)
        {
            for (j = 0; j < N/i; j++) {
                if (j == 0) 
                {
                    strcpy(memcpy(ant, P[j*], i));
                }
            }
        }
    }
}