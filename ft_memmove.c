#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *temp;
    char *csrc;
    char *cdest;

    i = 0;
    temp = 0;
    csrc = (char *)src;
    cdest = (char *)dest;

    while(i <= n)
    {
        temp[i] = csrc[i];
        i++;
    }
    i = 0;
    while(i <= n)
    {
        cdest[i] = temp[i];
        i++;
    }
    return(cdest);
}