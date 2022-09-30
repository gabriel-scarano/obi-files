#include <stdio.h>
#include <string.h>
#define MAX 100001

int main ()
{
    int N, i, j, achou = 0, count = 0;
    char P[MAX], Ant[MAX], D[MAX];

    scanf("%d", &N);
    scanf("%s", P);

    i = N/2;
    while (i >= 1 && achou == 0)
    {   if (N % i == 0)
        {   count = 0;
            while (count < 2/*N/i*/)
            {   if (count == 0)
                {   for (j = 0 + (N/i) * count; j <= N/i; j++)
                        Ant[j] = P[j];
                } else
                {   for (j = i * count; j < i + i*count -1; j++)
                        D[j - (N/i) * count] = P[j];
                }

                count++;
            }
        }

        printf("%s\n%s", Ant, D);

        achou = 1;
    }

    return 0;
}