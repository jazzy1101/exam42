/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:27:55 by dabae             #+#    #+#             */
/*   Updated: 2023/08/31 19:18:28 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_s2(char *s, char c)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		else
			return (1);
		i++;
	}
}

int	check_s1(char *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[j] != '\0' && j < i)
	{
		if(s[j] == c)
			return (0);
		else
			return (1);
		j++;
	}
}

void	compare_write(char *arg1, char *arg2)
{
	int	i;
	char	*res;

	i = 0;
	while(arg1[i] != '\0')
	{
		if(check_s1(arg1, arg1[i], i))
			res[i] = arg1[i];
		i++;
	}
	i = 0;
	while(arg2[i] != '\0')
	{
		if (check_s1(res[i], arg2[i], i))
			res[i] 
		arg2[i]

}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		while (argv[1][i])
		{
			ascii[argv[1][i]] = 1;
			i++;
		}
		while (argv[2][j])
		{
			if (ascii[argv[2][j]] == 0)
				ascii[argv[2][j]] = 1;
			j++;
		}
		while(ascii[z])
		{
			if (
			write(1, ascii, 1);
			ascii++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
