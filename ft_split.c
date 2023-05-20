#include "libft.h"

size_t  ft_len(char const *s, char c)
{
    size_t len;
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        if(!(s[i] == c))
        {
            len++;
            i++;
        }
        else
            i++;
    }
    return(len);
}

size_t  ft_count(char const *s, char c)
{
    size_t count;
    size_t i;

    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            i++;
            count++;
        }
        else
            i++;
    }
    return(count);
}


char    **ft_split(char const *s, char c)
{
    char **array;
    size_t len;
    size_t count;
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    len = ft_len(s, c);
    count = ft_count(s, c);
    array = malloc((len + count) * sizeof (array));
    while(s[i] != '\0')
    {
        while(s[i] != c)
        {
            array[k][j] = s[i];
            i++;
            j++;
        }
        array[k][j] = '\0';
        j = 0;
        i++;
        k++;
    }
    array[k] = 0;
    return(array);
}