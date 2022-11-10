#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    char *temp = NULL;
    while (s[i] != '\0')
    {
        if (s[i] == (char) c)
        {
            temp =  (char *)&s[i];
        }
        i++;
    }
    if (temp != NULL)
    {
        return temp;
    }else
    {
        return NULL;
    }
}