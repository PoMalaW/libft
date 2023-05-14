#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    while(dst[i] < '\0')
        i++;
    while (i <= (i + size))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return(i);
}