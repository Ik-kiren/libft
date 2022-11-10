#include "libft.h"

char *strdup(const char *source)
{
    int i;
    char *str;
    i = 0;
    str = malloc(sizeof(char) * ft_strlen(source));
    while (source[i] != '\0')
    {
        str[i] = source[i];
        i++;
    }
    str[i] = '\0';
    return str;
}