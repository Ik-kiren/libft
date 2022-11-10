#include "libft.h"

int ft_atoi(const char *str)
{
    int res = 0;
    int i = 1;
    res = res + (str[0] - '0');
    while (str[i] != '\0')
    {
        res = res * 10;
        res = res + (str[i] - '0');
        i++;
    }
    return res;
}
