#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    int res = 0;
    while (i < n)
    {
        
        if(s1[i] != s2[i] || s1[i] == 0 || s2[i] == 0)
        {
            res = s1[i] - s2[i];
            return res;
        }
        i++;
    }
    return 0;
}