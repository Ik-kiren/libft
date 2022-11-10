#include "libft.h"

int wordcount(char const *s, char c)
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c && s[i] != '\0')
        {
            i++;
        }
        if (s[i] != c && s[i] != '\0')
        {
            count++;
        }
        while (s[i] != c && s[i] != '\0')
        {
            i++;
        }
    }
    return count;
}

char *getstr(char const *s, int min, int max)
{

    char *str;
    int i;
    i = 0;
    str = malloc(sizeof(char) * ((max - min) + 1));
    while (min < max)
    {
        str[i] = s[min];
        i++;
        min++;
    }
    str[max + 1] = '\0';
    return str;
}


char **ft_split(char const *s, char c)
{
    int i = 0;
    int j = 0;
    int lenmin = 0;
    char **str = malloc(sizeof(char *) * (wordcount(s, ' ') + 1));
    while (s[i] != '\0')
    {
        lenmin = i;
        while (s[i] == c && s[i] != '\0')
        {
            lenmin++;
            i++;
        }
        if (s[i] != c && s[i] != '\0')
        {
            while (s[i] != c && s[i] != '\0')
            {
                i++;
            }
            str[j] = getstr(s, lenmin, i);
            j++; 
        }
    }
    str[j] = NULL;
    return str;
}
