/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:57:08 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/29 02:44:25 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*s;

	i = 0;
	size = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	s = (int *)malloc(size * sizeof(int));
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[i] = min + i;
		++i;
	}
	return (s);
}
