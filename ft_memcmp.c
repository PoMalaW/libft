#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    int *a;
    int *b;

    i = 0;
    a = (int *)s1;
    b = (int *)s2;

    while(i <= n)
    {
        if(a[i] == b[i])
            i++;
    }
    return(a - b);
}