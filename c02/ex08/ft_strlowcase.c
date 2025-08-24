/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:37:35 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/14 19:45:08 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (upper(str[i]))
			str[i] += 32;
		++i;
	}
	return (str);
}
