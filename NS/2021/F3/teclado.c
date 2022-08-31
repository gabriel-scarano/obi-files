/*
    OBI - NÍVEL SÊNIOR - 2021 - FASE 3 - TECLADO
                                                */

#include <stdio.h>
#include <string.h>

int main () {
    char N[1001];
    char C[1001][1001];
    int M, i, j, count = 0;

    scanf("%s", N);
    scanf("%d", &M);

    for (i = 0; i < M; i++)
        scanf("%s", C[i]);
    
    for (i = 0; i < M; i++) {
        if (strlen(N) == strlen(C[i])) {
            j = 0;

            while (C[i][j] != '\0') {
                switch (C[i][j]) {
                    case 'a':
                    case 'b':
                    case 'c':
                        C[i][j] = '2';
                        break;

                    case 'd':
                    case 'e':
                    case 'f':
                        C[i][j] = '3';
                        break;

                    case 'g':
                    case 'h':
                    case 'i':
                        C[i][j] = '4';
                        break;

                    case 'j':
                    case 'k':
                    case 'l':
                        C[i][j] = '5';
                        break;

                    case 'm':
                    case 'n':
                    case 'o':
                        C[i][j] = '6';
                        break;
                    
                    case 'p':
                    case 'q':
                    case 'r':
                    case 's':
                        C[i][j] = '7';
                        break;

                    case 't':
                    case 'u':
                    case 'v':
                        C[i][j] = '8';
                        break;

                    case 'w':
                    case 'x':
                    case 'y':
                    case 'z':
                        C[i][j] = '9';
                        break;
                }

                if (strcmp(N, C[i]) == 0) {
                    count++;
                }


                j++;
            }
        }
    }

    printf("%d", count);

    return 0;
}