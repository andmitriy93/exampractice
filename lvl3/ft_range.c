#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int *range;

    i = 0;
    if (start >= end)
        return (NULL);
    range = (int*)malloc(sizeof(int) * (end - start));
    if (range == NULL)
        return (NULL);
    while (i < end - start)
    {
        range[i] = start + 1;
        i++;
    }
    return (range);
}