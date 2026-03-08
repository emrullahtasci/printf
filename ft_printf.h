/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:43:30 by etasci            #+#    #+#             */
/*   Updated: 2026/03/07 17:06:52 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putunsigned(unsigned int n);
int	ft_puthex_up(unsigned long x);
int	ft_puthex_low(unsigned long x);
int	ft_putptr(void *ptr);
int ft_handle_format(int spec,va_list args);
#endif
