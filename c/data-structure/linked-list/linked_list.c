#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void fill_linked_list()
{
    node *n = malloc(sizeof(node));
    n->number = 1;
    n->next = NULL;
}

int main(void)
{
}