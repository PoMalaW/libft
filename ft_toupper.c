//#include <stdio.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        c -= 32;
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