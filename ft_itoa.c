#include "libft.h"

size_t  ft_intlen(int n)
{
    size_t len;
    
    len = 0;
    if(n == 0)
        return(1);
    while(n != 0)
    {
        len++;
        n /= 10;
    }
    return(len);
}

char    *ft_itoa(int n)
{
    char *str;
    size_t len;
    size_t i;

    len = ft_intlen(n);
    str = malloc((len + 1) * sizeof(str));
    if(str == NULL)
        return(NULL);
    i = 0;
    if(n < 0)
    {
        str[i] = '-';
        i++;
        n *= -1;
    }
    while(n != 0)
    {
        str[i] = (n % 10) + 48;
        i++;
        n /= 10;
    }
    str[i] = '\0';
    return(str);
}