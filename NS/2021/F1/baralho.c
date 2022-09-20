#include <stdio.h>
#include <string.h>

int main (void) {
    char S[157];
    int N, i, j, num;
    int cartas[14][4], soma[4];

    soma[0] = 13;
    soma[1] = 13;
    soma[2] = 13;
    soma[3] = 13;

    for (i = 1; i <= 13; i++)
        for (j = 0; j < 4; j++)
            cartas[i][j] = 0;

    scanf("%s", S);
    N = strlen(S);

    for (i = 0; i < N; i += 3)
    {   num = (S[i] - '0') * 10;
        num += S[i+1] - '0';
        
        switch (S[i+2])
        {   case 'C': cartas[num][0]++; break;
            case 'E': cartas[num][1]++; break;
            case 'U': cartas[num][2]++; break;
            case 'P': cartas[num][3]++; break;
        }
    }

    for (i = 0; i < 4; i++)
    {   for (j = 1; j <= 13 && soma[i] != -1; j++)
            if (cartas[j][i] == 1)
                soma[i] -= cartas[j][i];
            else if (cartas[j][i] >= 2)
                soma[i] = -1;
    }

    for (i = 0; i < 4; i++)
        if (soma[i] != -1)
            printf("%d\n", soma[i]);
        else
            printf("erro\n");
}