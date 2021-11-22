/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:39:25 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/21 17:50:30 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_adress(unsigned long nbr)
{
	ft_putstr("0x");
	ft_putnbr_base(nbr, "0123456789abcdef");
	return (ft_len(nbr, 16) + 2);
}
