/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 03:44:15 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/30 18:49:44 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	total_len(char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
			j++;
		c += j;
		++i;
	}
	i = 0;
	while (sep[i])
		i++;
	return (c + (i * (size - 1)) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*p;
	int		x;

	i = -1;
	x = 0;
	p = (char *)malloc(sizeof(char) * total_len(strs, sep, size));
	if (!p)
		return (NULL);
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			p[x++] = strs[i][j];
		j = -1;
		if (i == size - 1)
			break ;
		while (sep[++j])
			p[x++] = sep[j];
	}
	p[x++] = '\0';
	return (p);
}
