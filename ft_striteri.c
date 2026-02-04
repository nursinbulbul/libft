
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int n;
    n = 0;
    if (!s || !f)
    return;
    
    while (s[n] !='\0')
    {
        
        f(n, &s[n]);
        n++;
    }
    
}