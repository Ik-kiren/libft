/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:24:06 by cdupuis           #+#    #+#             */
/*   Updated: 2022/11/17 15:24:08 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
size_t i = start;
size_t j = 0; 
char *tab;
size_t length = len + 1;
if(len > ft_strlen(s))
    length = strlen(s) + 1;
tab  = (char *)malloc(sizeof(char) * length);
    if (!tab) 
    {
        free(tab);
        return NULL;
    }
    if (start > ft_strlen(s) )
    {
        tab[j] = '\0';
        return tab;
    } 
    while (s[i])
    {
        if (i >= start && j < len)
        {
            tab[j] = s[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
    return tab;
}
