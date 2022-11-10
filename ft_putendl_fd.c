#include "libft.h"

void ft_putendl_fd (char *s, int fd)
{
    int i = 0;
    int lf = 10;
    while (s[i] != '\0')
    {
        i++;
    }
    write(fd, &s, i);
    write(fd, &lf, 1);
}