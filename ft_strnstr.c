#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{

    size_t i = 0;
    int j = 0;
    char *p = malloc(sizeof(char) * ft_strlen(haystack));
    ft_strlcpy(p, haystack, ft_strlen(haystack));
    if (needle[0] == '\0')
    {
        return p;
    }
    while (i < n)
    {   
        //p = haystack + i;
        while (p[i] == needle[j])
        {
            if (needle[j + 1] == '\0')
            {
                return &p[i];
            }
            i++;
            j++;
        }
        i++;
    }
    return NULL;
}