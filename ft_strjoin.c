#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    size_t s1len;
    size_t s2len;
    size_t len;
    size_t i;
    size_t j;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    len = s1len + s2len;
    i = 0;
    j = 0;

    new = (char *)malloc(len* sizeof(char));
    if(new == NULL)
        return(0);
    while(i < s1len)
    {
        new[i] = s1[i];
        i++;
    }
    while(i + j <= len)
    {
        new[i + j] = s2[j];
        j++;
    }
    return(new);
}