#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
} List;

List *adjlist[100001] = {0};

void addNode (int s, int d)
{
    Node *dest, *tmp, *src;

    if (adjlist[s]->head ==  NULL)
    {   src = (Node *)malloc(sizeof(Node));
        src->vertex = s;
        src->next = NULL;
        adjlist[s]->head = src;
    }

    dest = (Node*)malloc(sizeof(Node));

    dest->vertex = d;
    dest->next = NULL;
    tmp = adjlist[d]->head;

    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = dest;
}

int main ()
{   int N, M, L;
    int i;

    scanf("%d %d", &N, &M);

    for (i = 1; i <= N; i++)
    {   scanf("%d", &L);
        addNode(i, L);
    }

    return 0;
}