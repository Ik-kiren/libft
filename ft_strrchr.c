/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:23:14 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:23:15 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			temp = (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
		temp = (char *)&s[i];
	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
