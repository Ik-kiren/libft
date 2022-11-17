/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:16:30 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:16:31 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			count++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
	}
	return (count);
}

char	*getstr(char const *s, int min, int max)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * ((max - min) + 1));
	while (min <= max)
	{
		str[i] = s[min];
		i++;
		min++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		lenmin;
	char	**str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	while (s[i] != '\0')
	{
		lenmin = i;
		while (s[i] == c && s[i] != '\0')
		{
			lenmin++;
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			str[j++] = getstr(s, lenmin, i - 1);
		}
	}
	str[j] = NULL;
	return (str);
}