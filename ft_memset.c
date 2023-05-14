#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    int *ints;

    i = 0;
    ints = (int *)s;
    while(i <= n)
    {
        ints[i] = c;
        i++;
    }
    return(ints);
}