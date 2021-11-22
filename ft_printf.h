/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:48:01 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/21 17:50:23 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_adress(unsigned long nbr);
int	ft_len(unsigned long nbr, int base);
int	ft_putchar(char c);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_strlen(const char *s);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_len_int(long nbr);
int	ft_print(const char format, va_list argptr);

#endif
