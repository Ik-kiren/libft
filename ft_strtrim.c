/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:23:29 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:23:31 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s1[j])
	{
		if (ft_strchr(set, s1[j]) == 0)
			break;
		j++;
	}
	start = j;
	while (s1[j])
	{
		if (ft_strchr(set, s1[j]) != 0)
			break;
		j++;
	}
	char *tab = malloc(sizeof(char) * j - start + 1);
	while (start < j)
	{
		tab[i] = s1[start];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}
