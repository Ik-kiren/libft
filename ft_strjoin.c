#include "libft.h"


int strlenadd(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int len = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[i] != '\0')
    {
        j++;
    }
    len = i + j;
    return len;
}

char *ft_strjoin(char const *s1, char const *s2)
{

    int i = 0;
    int j = 0;
    int len = strlenadd(s1, s2);
    char *tab = malloc(sizeof(char) * len);
    while (s1[i] != '\0')
    {
        tab[i] = s1[i];
        i++;
    }
    while (s2[i] != '\0')
    {
        tab[i] = s2[j];
        i++;
        j++;
    }
    return tab;
}
