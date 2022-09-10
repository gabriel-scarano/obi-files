/*
    OBI - NÍVEL SÊNIOR - 2019 - FASE 3 - MESA REDONDA 
                                                        */

#include <stdio.h>

int main () {
    int cadeiras[3] = { 0, 0, 0 };
    int A, B, C;
    int i;

    scanf("%d %d", &A, &B);

    cadeiras[A%3] = 1;

    if (cadeiras[B%3])
        cadeiras[(B%3) + 1];

    i = 0;
    while (cadeiras[i] != 0) {
        i++;
    }

    printf("%d", i);
    
    return 0;
}