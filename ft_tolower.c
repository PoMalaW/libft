//#include <stdio.h>
#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        c += 32;
    return(c);
}

/*int main(void)
{
    char c = '1';
        if (ft_toupper(c))
        {
            printf("%c est le caractere retourné \n", ft_toupper(c));
        }
    return 0;
}*/