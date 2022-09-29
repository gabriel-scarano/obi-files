#include <stdio.h>
#include <string.h>

int main ()
{   char A[11], B[11];
    int i, lenA, lenB, X = -1, Y = -1, N;

    scanf(" %[^\n]s", A);
    scanf(" %[^\n]s", B);

    lenA = strlen(A);
    lenB = strlen(B);

    if (lenA < lenB)
    {   for (i = lenA; i >= 0; i--)
            A[i+lenB-lenA] = A[i];

        for (i = 0; i < lenB-lenA; i++)
            A[i] = '0';

        lenA += lenB-lenA;
    } else if (lenB < lenA)
    {   for (i = lenB; i >= 0; i--)
            B[i+lenA-lenB] = B[i];

        for (i = 0; i < lenA-lenB; i++)
            B[i] = '0';

        lenB += lenA-lenB;
    }

    for (i = 0; i < lenA; i++)
    {   if (A[i] - '0' > B[i] - '0')
            B[i] = '-';
        else if (A[i] - '0' < B[i] - '0')
            A[i] = '-';        
    }

    i = 0;
    do {
        if (A[i] != '-')
        {   if (X == -1)
                X = 0;
            
            N = A[i] - '0';
            X *= 10;
            X += N;
        }

        i++;

    } while(A[i] != '\0');

    i = 0;
    do {
        if (B[i] != '-')
        {   if (Y == -1)
                Y = 0;

            N = B[i] - '0';
            Y *= 10;
            Y += N;
        }

        i++;

    } while(B[i] != '\0');    

    if (X < Y)
        printf("%d %d", X, Y);
    else
        printf("%d %d", Y, X);


}
