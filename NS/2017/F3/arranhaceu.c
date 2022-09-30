#include <stdio.h>
#include <stdlib.h>

int main()
{   int N, Q, tipo, K, P, andares[100001], somas[100001] = { 0 }, ind = 0;
    int i, j;

    scanf("%d %d", &N, &Q);

    for (i = 1; i <= N; i++)
        scanf("%d", &andares[i]);

    

    for (i = 0; i < Q; i++)
    {   scanf("%d", &tipo);

        if (tipo == 0)
        {   scanf("%d %d", &K, &P);
            andares[i] = P;            
        } else
        {   scanf("%d", &K);

            for (j = 1; j <= N; j++)
                somas[ind] += andares[j];

            ind++;
        }
    }

    return 0;
}
