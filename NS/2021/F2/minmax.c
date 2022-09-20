#include <stdio.h>

int soma_digitos(int N);

int main () {
    int S, A, B, i, menor, maior;

    scanf("%d %d %d", &S, &A, &B);

    for (i = A; i <= B; i++)
    {   if (soma_digitos(i) == S)
        {   menor = i;
            i = B+1;
        }
    }

    for (i = B; i >= A; i--)
    {   if (soma_digitos(i) == S)
        {
            maior = i;
            i = A-1;
        }            
    }

    printf("%d\n%d", menor, maior);

    return 0;
}

int soma_digitos(int N) {
    int soma = 0;

    while (N != 0)
    {  soma += N % 10;
        N /= 10;
    }

    return soma;
}