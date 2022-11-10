#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        i++;        
    }
    char *tab = malloc(sizeof(char) * i);
    while (j <= i)
    {
        tab[j] = (*f)(j, s[j]);
        j++;
    }
    tab[j] = '\0';
    return tab;
}
