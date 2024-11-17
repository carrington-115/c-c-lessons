#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        list[i] = i + 1;
    }

    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        if (i < 3)
            tmp[i] = list[i];
        else
            tmp[i] = 4;
    }

    free(list);
    list = tmp;

    // printing
    for (int i = 0; i < 4; i++)
    {
        printf("%d,\t", list[i]);
    }

    return 0;
}