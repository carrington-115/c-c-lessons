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
        list[i] = i;
    }

    // printing
    for (int i = 0; i < 3; i++)
    {
        printf("%d,\t", list[i]);
    }
}