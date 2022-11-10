#include "libft.h"
#include <limits.h>

void reverse_str(char *str, int len)
{

    int j = 0;
    int i = len;
    int temp = 0;
    while (j <= len / 2)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
        j++;
    }
}

char *ft_itoa(int n)
{
    int i = 0;
    int j = 0;
    int temp = n;
    int res = 0;
    int neg = 0;
    if (temp < 0)
    {
        n = n * -1;
        temp = temp * -1;
        neg = 1;
    }
    while (temp > 0)
    {
        temp = temp / 10;      
        i++;
    }
    if (neg == 0)
    {
        i--;
    }
    char *tab = malloc(sizeof(char) * i);
    while ( n > 0)
    {
        res = (n % 10) + '0';
        n = n / 10;
        tab[j] = res;
        j++;
    }
    if (neg == 1)
    {
        tab[i] = '-';
    }
    reverse_str(tab, i);
    return tab;
    // if (n = -2147483648){ return -2147483648 };
}

