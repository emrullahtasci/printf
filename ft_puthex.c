/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:39:18 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/07 17:06:56 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned long x)
{
	char	*base_low;
	int		count;

	
	base_low = "0123456789abcdef";
	count = 0;
	if (x >= 16)
		count += ft_puthex_low(x / 16);
	count += ft_putchar(base_low[x % 16]);
	return (count);
}

int	ft_puthex_up(unsigned long x)
{
	int		count;
	char	*base_up;

	count = 0;
	base_up = "0123456789ABCDEF";
	if (x >= 16)
		count += ft_puthex_up(x / 16);
	count += ft_putchar(base_up[x % 16]);
	return (count);
}
