#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *mem;

    if(nmemb == 0 || size == 0)
        return(NULL);
    mem = malloc(nmemb* size);
    if(mem == NULL)
        return(NULL);
    ft_bzero(mem, nmemb*size);
    return(mem);
}