/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:38:00 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/02 20:53:40 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count +=  ft_putunsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

#include <stdio.h>


int	main(void)
{
	unsigned int	n;

	n = 12345;
	printf("Real : %u\n", n);
	printf("Mine : ");
	printf(" (count=%d)\n", ft_putunsigned(n));
	return (0);
}
