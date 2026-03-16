/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 20:23:15 by etasci            #+#    #+#             */
/*   Updated: 2026/03/16 21:41:55 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_handle_format(int spec, va_list args)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (spec == 'x')
		return (ft_puthex_low(va_arg(args, unsigned int)));
	else if (spec == 'X')
		return (ft_puthex_up(va_arg(args, unsigned int)));
	else if (spec == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (spec == '%')
		return (ft_putchar('%'));
	else
	{
		ft_putchar('%');
		ft_putchar(spec);
		return (2);
	}
}
