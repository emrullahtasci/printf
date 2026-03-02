/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:39:18 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/02 20:22:53 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned long x)
{
	char	*base_low;
	int		count;

	count = 0;
	base_low = "0123456789abcdef";
	if (x >= 16)
		count += ft_puthex_low(x / 16);
	count += count + ft_puthex_low(base_low[x % 16]);
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
