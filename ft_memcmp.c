#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;

    while(i <= n)
    {
        if(s2[i] == s1[i])
            i++;
        else
            return(i);
    }
    return(i);
}