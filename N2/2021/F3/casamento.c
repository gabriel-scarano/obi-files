#include <stdio.h>
#include <string.h>
#define MAX 1000000001

int count_digitos(int n);

int main ()
{   char A[MAX], B[MAX];
    int X, Y;

    scanf("%d %d", &X, &Y);

    printf("%d", count_digitos(X));
    
    return 0;
}

int count_digitos(int n)
{   int count = 0;

    while (n != 0)
    {   n /= 10;
        count++;        
    }

    return count;
}