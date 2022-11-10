#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
int i = start;
int j = 0; 
char *tab = malloc(sizeof(char) * len);
    if (tab == NULL) 
    {
        return NULL;
    }
    while (s[i] != '\0')
    {
        tab[j] = s[i];
        i++;
        j++;
    }
    return tab;
}
