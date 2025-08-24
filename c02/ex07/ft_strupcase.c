/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:19:19 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/14 19:36:43 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (lower(str[i]))
			str[i] -= 32;
		++i;
	}
	return (str);
}
