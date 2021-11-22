/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:20:22 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/22 01:58:02 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(const char format, va_list argptr)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(argptr, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(argptr, char *)));
	else if (format == 'c' )
		return (ft_putchar(va_arg(argptr, int)));
	else if (format == 'u')
		return (ft_putnbr_base(va_arg(argptr, unsigned int), "0123456789"));
	else if (format == 'x' )
		return (ft_putnbr_base(
				va_arg(argptr, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_base(
				va_arg(argptr, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (ft_adress(va_arg(argptr, unsigned long)));
	else
		return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	int		ft_retuen;
	int		i;
	va_list	argptr;

	ft_retuen = 0;
	i = 0;
	va_start(argptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_retuen += ft_print(format[i], argptr);
		}
		else
			ft_retuen += ft_putchar(format[i]);
		i++;
	}
	va_end(argptr);
	return (ft_retuen);
}
