/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:11:11 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:11:13 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getsize(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*tab;

	i = getsize(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tab = malloc(sizeof(char) * (i + 1));
	tab[i] = '\0';
	if (n == 0)
		tab[0] = '0';
	if (n < 0)
	{
		n = n * -1;
		tab[0] = '-';
	}
	i--;
	while (n > 0)
	{
		tab[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (tab);
}
