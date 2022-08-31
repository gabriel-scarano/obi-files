/*
    OBI - NÍVEL 1 - 2008 - FASE 1 - TELEFONE
                                             */

#include <stdio.h>

int main () {
    char telefone[16];
    int i = 0;

    scanf("%s", telefone);

    while (telefone[i] != '\0') {
        switch (telefone[i]) {
            case 'A':
            case 'B':
            case 'C':
                printf("2");
                break;

            case 'D':
            case 'E':
            case 'F':
                printf("3");
                break;

            case 'G':
            case 'H':
            case 'I':
                printf("4");
                break;

            case 'J':
            case 'K':
            case 'L':
                printf("5");
                break;

            case 'M':
            case 'N':
            case 'O':
                printf("6");
                break;

            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                printf("7");
                break;
            
            case 'T':
            case 'U':
            case 'V':
                printf("8");
                break;

            case 'W':
            case 'X':
            case 'Y':
                printf("9");
                break;

            default:
                printf("%c", telefone[i]);
                break;
        }

        i++;
    }

    return 0;
}