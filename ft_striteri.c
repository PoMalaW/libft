#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
    str[i] = (*f)(i, str);
    i++;
    }
}