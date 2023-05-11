#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int num;

    i = 0;
    sign = 1;
    num = 0;

    while (nptr[i] == ' ' || nptr[i] >= '\a' && nptr[i] <= '\r') 
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(ft_isdigit(str[i]))
    {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    return(num * sign);
}