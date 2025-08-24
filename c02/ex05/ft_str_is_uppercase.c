/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:57:38 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/14 18:14:13 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = 1;
		else
			return (0);
		++i;
	}
	return (c);
}
