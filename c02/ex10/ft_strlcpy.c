/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 04:01:45 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/15 17:33:38 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a])
		++a;
	if (size > 0)
	{
		while (b < size - 1)
		{
			dest[b] = src[b];
			++b;
		}
	}
	dest[b] = '\0';
	return (a);
}
