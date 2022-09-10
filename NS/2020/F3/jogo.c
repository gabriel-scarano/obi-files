/*
    OBI - NÍVEL SÊNIOR - 2020 - FASE 3 - JOGO DO PRETO E BRANCO
                                                                */

#include <stdio.h>

int L, C;

int existe_branco (int x, int y, int T[7][7]);
int existe_preto (int x, int y, int T[7][7]);
int conta_vazio (int x, int y, int T[7][7]);

int main () {
    int P, X, Y;
    int tab[7][7];
    int i, j, count = 0;
    int e1, e2, menor;

    scanf("%d %d", &L, &C);
    scanf("%d", &P);

    for (i = 1; i <= L; i++)
        for (j = 1; j <= C; j++)
            tab[i][j] = 0;

    for (i = 0; i < P; i++) {
        scanf("%d %d", &X, &Y);
        tab[X][Y] = -1;
    }

    for (i = 1; i <= L; i++) {
        for (j = 1; j <= C; j++) {

            if (!existe_branco(i, j, tab) && existe_preto(i, j, tab) && tab[i][j] == 0) {
                e1 = i;
                e2 = j;
                menor = conta_vazio(i, j, tab);

                if (tab[i-1][j] == 0 && i-1 >= 1 && conta_vazio(i-1, j, tab) < menor && existe_branco(i-1, j, tab) == 0 && existe_preto(i-1, j, tab) == 1) {
                    e1 = i-1;
                    e2 = j;
                    menor = conta_vazio(i-1, j, tab);
                }

                if (tab[i+1][j] == 0 && i+1 <= L && conta_vazio(i+1, j, tab) < menor && existe_branco(i+1, j, tab) == 0 && existe_preto(i+1, j, tab) == 1) {
                    e1 = i+1;
                    e2 = j;
                    menor = conta_vazio(i+1, j, tab);
                }

                if (tab[i][j-1] == 0 && j-1 >= 1 && conta_vazio(i, j-1, tab) < menor && existe_branco(i, j-1, tab) == 0 && existe_preto(i, j-1, tab) == 1) {
                    e1 = i;
                    e2 = j-1;
                    menor = conta_vazio(i, j-1, tab);
                }

                if (tab[i][j+1] == 0 && j+1 <= C && conta_vazio(i, j+1, tab) < menor && existe_branco(i, j+1, tab) == 0 && existe_preto(i, j+1, tab) == 1) {
                    e1 = i;
                    e2 = j+1;
                    menor = conta_vazio(i, j+1, tab);
                }

                tab[e1][e2] = 1;
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}

int existe_branco (int x, int y, int T[7][7]) {
    if (T[x-1][y] == 1 && x-1 >= 1)
        return 1;

    if (T[x+1][y] == 1 && x+1 <= L)
        return 1;

    if (T[x][y-1] == 1 && y-1 >= 1)
        return 1;

    if (T[x][y+1] == 1 && y+1 <= C)
        return 1;

    return 0;
}

int existe_preto (int x, int y, int T[7][7]) {
    if (T[x-1][y] == -1 && x-1 >= 1)
        return 1;

    if (T[x+1][y] == -1 && x+1 <= L)
        return 1;

    if (T[x][y-1] == -1 && y-1 >= 1)
        return 1;

    if (T[x][y+1] == -1 && y+1 <= C)
        return 1;

    return 0;
}

int conta_vazio (int x, int y, int T[7][7]) {
    int count = 0;

    if (T[x-1][y] == 0 && x-1 >= 1)
        count++;

    if (T[x+1][y] == 0 && x+1 <= L)
        count++;

    if (T[x][y-1] == 0 && y-1 >= 1)
        count++;

    if (T[x][y+1] == 0 && y+1 <= C)
        count++;

    return count;
}
