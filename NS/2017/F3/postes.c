#include <stdio.h>

int main () {
    int N, i, X;
    int postes_subst = 0, postes_ref = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);

        if (X < 50)
            postes_subst++;
        else if (X >= 50 && X < 85)
            postes_ref++;
    }

    printf("%d %d", postes_subst, postes_ref);

    return 0;
}