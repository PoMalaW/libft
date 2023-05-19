#include "libft.h"

size_t  ft_getlen(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t len;

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
    return(len);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char *trim;
    size_t len;
    size_t i;
    size_t j;

    len = 0;
    i = 0;
    j = 0;
    if(s1 == NULL)
        return(NULL);
    if(set == NULL)
        return(ft_strdup(s1));
    len = ft_getlen(s1, set);
    trim = malloc(len * sizeof(trim));
    if(trim == NULL)
        return(0);
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