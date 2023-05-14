#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char *chars;

    i = 0;
    chars = (char *)s;

    while (*chars != c)
    {
        if(chars[i] == '\0')
            return(NULL);
        i++;
    }
    return(&chars[i]);
}