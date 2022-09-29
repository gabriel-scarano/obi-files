#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a;
    int count;
    FILE *fp;

    fp = fopen("arq.txt", "w");

    do
    {
        count++;
        scanf("%c", &a);
        if (a != '0')
            fprintf(fp, "%c", a);
    } while (a != '0');

    fclose(fp);

    printf("%d", count);

    return 0;
}