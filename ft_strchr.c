char ft_strchr(const char *s, int c)
{
    int i;

    i = 0;

    while (*s != c)
    {
        if(s[i] == '\0')
            return(NULL);
        i++;
    }
    return(&s[i]);
}