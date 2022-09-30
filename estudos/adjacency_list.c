#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int vertexNum;
    struct Node *next;
} Node;

typedef struct List
{
    Node *head;
} List;

List *adjlist[4] = {0};
int maxNode = 3;

void printList()
{   int i;
    for (i = 0; i < maxNode; i++)
    {   Node *p = adjlist[i]->head;
        printf("Adjacency list for vertex %d\n", i);

        while (p)
        {   printf("%d ", p->vertexNum);
            p = p->next;
        }

        printf("\n");
    }
}

void addNode(int s, int d)
{
    Node *dest, *tmp, *src;

    if (adjlist[s]->head == NULL)
    {
        src = (Node *)malloc(sizeof(Node));
        src->vertexNum = s;
        src->next = NULL;
        adjlist[s]->head = src;
    }

    dest = (Node *)malloc(sizeof(Node));

    dest->vertexNum = d;
    dest->next = NULL;
    tmp = adjlist[s]->head;

    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = dest;
}

int main()
{
    int i;

    for (i = 0; i < 4; i++)
    {
        adjlist[i] = (List *)malloc(sizeof(List));
        adjlist[i]->head = NULL;
    }

    addNode(0, 1);
    addNode(0, 3);
    addNode(1, 2);
    printList();

    return 0;
}