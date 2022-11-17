/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:20:44 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:20:46 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	tab = malloc(sizeof(char) * i);
	while (j < i)
	{
		tab[j] = (*f)(j, s[j]);
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
