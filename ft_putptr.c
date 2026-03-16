/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:39:45 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/16 21:42:03 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putptr(void *ptr)
{
	unsigned long	x;
	int				count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	else
	{
		x = (unsigned long)ptr;
		count = 0;
		count += write(1, "0x", 2);
		count += ft_puthex_low(x);
	}
	return (count);
}
