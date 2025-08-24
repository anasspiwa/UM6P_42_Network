/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:26:18 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/27 23:39:47 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	print(char c)
{
	if ((c <= 31 && c >= 0) || c == 127)
		return (1);
	else
		return (0);
}

void	hex(int c)
{
	int	s;

	s = c;
	s = s % 16;
	c = c / 16;
	if (c < 10)
		c = c + 48;
	if (s < 10)
		s = s + 48;
	else
		s = s + 87;
	write(1, &c, 1);
	write(1, &s, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (print(str[i]))
		{
			write (1, "\\", 1);
			if (str[i] == '\0')
				write(1, "00", 2);
			hex(str[i]);
			str[i] = '\0';
		}
		else
			write(1, &str[i], 1);
		++i;
	}

}

