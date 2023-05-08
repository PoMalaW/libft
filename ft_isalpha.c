//#include <stdio.h>

int ft_isalpha(int c)
{
    return((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main(void)
{
    char c = 0;
    while(c < 127)
    {
        if (ft_isalpha(c))
        {
            printf("%c est un caractère alphabétique.\n", c);
        }
        else
        {
            printf("%c n'est pas un caractère alphabétique.\n", c);
        }
        c++;
    }
    return 0;
}*/