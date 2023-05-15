#include "libft.h"

char    *ft_strdup(const char *s)
{
    const void *src;
    void *dest;
    size_t n;

    n = ft_strlen(s);
    n++;

    dest = (char *) malloc(n * sizeof(char));
    src = (const void *)s;
    ft_memcpy(dest, src, n);
    return(dest);
}