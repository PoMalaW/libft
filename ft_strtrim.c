#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char *trim;
    size_t len;
    size_t i;
    size_t j;

    len = 0;
    i = 0;
    j = 0;

    while(s1[i] != '\0')
    {
        if(set[j] == '\0')
            j = 0;
        if(!(s1[i] == set[j]))
        {
            len++;
            i++;
        }
        else
            j++;
    }
    trim = malloc(len * sizeof(trim));
    if(trim == NULL)
        return(0);
    i = 0;
    while(i < len)
    {
        if(set[j] == '\0')
            j = 0;
        if(!(s1[i] == set[j]))
            trim[i] = s1[i];
        else
            j++;
    }
    trim[i] = '\0';
    return(trim);
}