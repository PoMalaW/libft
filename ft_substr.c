#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t end;
    char *sub;

    i = start;
    end = len + start;
    sub = (char *) malloc(len * sizeof(char));
    if(sub == NULL)
        return(NULL);
    while(i < end)
    {
        sub[i] = s[i];
        i++;
    }
    return(sub);
}