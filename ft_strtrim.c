#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (s1[i] != '\0')
    {   
        i++;
    }
    int len = i;
    i = 0;
    while (set[i] != '\0')
    {
        if (s1[0] == set[i])
        {
            j = 1;
        }
        if  (s1[len] == set[i])
        {
            k = 1;
        }
        i++;
    }
    i = 0;
    len = len - k - j;
    char *tab = malloc(sizeof(char) * len);
    while (j <= len)
    {
        tab[i] = s1[j];
        i++;
        j++;
    }
    return tab;
}