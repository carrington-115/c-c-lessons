#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    char *args[] = {"1", "2", "3"};
    argc = 3;
    argv = args;
    node *list = NULL;

    for (int i = 0; i < argc; i++)
    {
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            // Free memory some how
        }
        int number = atoi(argv[i]);
        n->number = number;
        n->next = list;
        list = n;
    }

    // printing
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("List Element: %d\n", ptr->number);
        ptr = ptr->next;
    }
}