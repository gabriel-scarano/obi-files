/*
    OBI - NÍVEL SÊNIOR - 2019 - FASE 3 - XADREZ ALEATÓRIO 
                                                            */

#include <stdio.h>

int main () {
    int N, T, soma = 0, i;

    scanf("%d %d", &N, &T);

    switch (T) {
        case 0:
            printf("%d", N);
            break;
        
        case 1:
            printf("%d", N * (N-1));
            break;
        
        case 2:
            for (i = 2; i <= N-1; i++)
                soma += (i-1) * (N-i);
            
            printf("%d", soma);
            break;
    }
    
    return 0;
}