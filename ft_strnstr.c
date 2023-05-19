#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;
    char *big;
    char *small;

    big = (char *)s1;
    small = (char *)s2;
    i = 0;
    j = 0;

    if(s2 == NULL)
        return (big);
    while(s2[j] != '\0')
    {
        if(s1[i] == s2[j])
        {
            while(s1[i + j] == s2[j] && j < n)
                j++;
            return(&small[i]);
        }
        i++;
    }
    return(NULL);
}