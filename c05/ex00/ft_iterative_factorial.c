/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansettaf <ansettaf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:21:09 by ansettaf         #+#    #+#             */
/*   Updated: 2025/07/23 16:07:18 by ansettaf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = nb;
	r = 1;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		r = r * i;
		--i;
	}
	return (r);
}
