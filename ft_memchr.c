void *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = 0;

    while(i <= n)
    {
        while (*s != c)
        {
            if(i == n)
                return(NULL);
            i++;
        }
    return(&s[i]);
    }
}