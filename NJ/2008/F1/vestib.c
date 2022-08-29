/*
    OBI - NÍVEL JÚNIOR - 2008 - FASE 1 - VESTIBULAR
                                                    */

#include <stdio.h>

int main () {
    int N, i, count = 0;
    char gabarito[81], respostas[81];

    scanf("%d", &N);
    scanf("%s", gabarito);
    scanf("%s", respostas);

    for (i = 0; i < N; i++)
        if (gabarito[i] == respostas[i])
            count++;

    printf("%d", count);

    return 0;
}