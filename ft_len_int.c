/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:09:27 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/21 01:36:13 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_int(long nbr)
{
	long	number;
	int		i;

	i = 0;
	number = (long) nbr;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		number = (long) nbr * -1;
		i++;
	}
	while (number > 0)
	{
		i++;
		number /= 10;
	}
	return (i);
}
