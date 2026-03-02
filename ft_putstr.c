/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:24:28 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/02 16:17:31 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
	{
		str = "(null)";
	}
	while (str[i])
	{
		count = count + write(1, &str, 1);
		i++;
	}
	return (count);
}
#include <stdio.h>

int	main(void)
{
	int	ft_ret;
	int	real_ret;

	// --- TEST 1: String ---
	ft_ret = ft_printf("Test string: %s\n", "Emrullah");
	real_ret = printf("Test string: %s\n", "Emrullah");
	printf("ft_printf return: %d\n", ft_ret);
	printf("printf return: %d\n", real_ret);
	printf("---------------------------\n");
	// --- TEST 2: Char ---
	ft_ret = ft_printf("Test char: %c\n", 'A');
	real_ret = printf("Test char: %c\n", 'A');
	printf("ft_printf return: %d\n", ft_ret);
	printf("printf return: %d\n", real_ret);
	printf("---------------------------\n");
	// --- TEST 3: Integer ---
	ft_ret = ft_printf("Test int: %d\n", 42);
	real_ret = printf("Test int: %d\n", 42);
	printf("ft_printf return: %d\n", ft_ret);
	printf("printf return: %d\n", real_ret);
	printf("---------------------------\n");
	return (0);
}
