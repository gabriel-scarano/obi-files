/*
    OBI - NÍVEL JÚNIOR - 2008 - FASE 2 - AUTO-ESTRADA
                                                    */

#include <stdio.h>

int main () {
    int C, i, count = 0;
    char S[1000001];

    scanf("%d", &C);
    scanf("%s", S);

    for (i = 0; i < C; i++) {
        switch (S[i]) {
            case 'P':
            case 'C':
                count += 2;
                break;
            
            case 'A':
                count++;
                break;
        }
    }

    printf("%d", count);

    return 0;
}