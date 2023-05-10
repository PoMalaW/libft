#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return(1);
    return(0);
}

int main(void)
{
    char c = 0;
    while(c < 127)
    {
        if (ft_isalnum(c))
        {
            printf("%c est un caractère alphabétique ou numérique.\n", c);
        }
        else
        {
            printf("%c n'est pas un caractère alphabétique ou numérique.\n", c);
        }
        c++;
    }
    return 0;
}