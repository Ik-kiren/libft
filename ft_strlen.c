#include "libft.h"

size_t ft_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
    // a verifier;
}