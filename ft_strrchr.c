#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *chars;

    i = ft_strlen(s);
    chars = (char *)s;

    while (*chars != c)
    {
        if(chars[i] == '\0')
            return(NULL);
        i--;
    }
    return(&chars[i]);
}