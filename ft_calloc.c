/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:04:53 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:04:58 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementcount, size_t elementsize)
{
	void	*str;

	str = malloc(elementcount * elementsize);
	if (str == NULL)
	{
		return (NULL);
	}
	if (elementcount == 18446744073709551615UL
		&& elementsize == 18446744073709551615UL)
	{
		return (NULL);
	}
	ft_memset(str, 0, elementcount * elementsize);
	return (str);
}
