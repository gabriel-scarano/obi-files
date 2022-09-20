#include <stdio.h>
#include <math.h>

int main ()
{   int nivel[4], i, j, aux;
    
    for (i = 0; i < 4; i++)
        scanf("%d", &nivel[i]);

    for (i = 0; i < 3; i++)
    {   for (j = i+1; j < 4; j++)
        {   if (nivel[j] < nivel[i])
            {   aux = nivel[j];
                nivel[j] = nivel[i];
                nivel[i] = aux;
            }
        }
    }

    printf("%.0f", fabs((nivel[3] + nivel[0]) - (nivel[2] + nivel[1])));

    return 0;
}