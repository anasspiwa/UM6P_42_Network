/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:40:51 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/28 17:57:46 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc((len(src) + 1));
	if (!s)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		++i;
	}
	s[i] = '\0';
	return (s);
}
