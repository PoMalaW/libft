//#include <stdio.h>
#include "libft.h"

int ft_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}

/*int main(void)
{
    char c = 0;
    while(c < 127)
    {
        if (ft_isdigit(c))
        {
            printf("%c est un chiffre.\n", c);
        }
        else
        {
            printf("%c n'est pas un chiffre.\n", c);
        }
        c++;
    }
    return 0;
}*/