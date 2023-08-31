/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:42:32 by dabae             #+#    #+#             */
/*   Updated: 2023/08/31 14:05:47 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *s)
{
	int	i;

	i = 0;
	while(*s)
		i++;
	return (i);
}
		
char	*ft_strdup(char *src)
{
	char	*s;
	int	i;

	s = malloc(str_len(src) + 1);
	
	if (!s)
		return (NULL);
	else
	{
		i = 0;
		while(src[i])
		{
			s[i] = src[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
}
