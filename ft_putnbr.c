/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:37:02 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/07 17:06:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	x;
	int		count;
	char	c;

	count = 0;
	x = nbr;
	if (x < 0)
	{
		count += write(1, "-", 1);
		x = -x;
	}
	if (x >= 10)
	{
		count += ft_putnbr(x / 10);
	}
	c = (x % 10 + '0');
	count += write(1, &c, 1);
	return (count);
}