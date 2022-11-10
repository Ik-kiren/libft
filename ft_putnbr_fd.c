#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char res;
    if (n > 0)
    {

        res = (n % 10) + '0';
        ft_putnbr_fd(n / 10, fd);
        write(fd, &res, 1);
    }
}
