/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 20:27:42 by etasci            #+#    #+#             */
/*   Updated: 2026/02/25 22:02:16 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list args)
{
	char	*str;
	int		i;
	int		count;

	count = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		str = "(null)";
	}
	i = 0;
	while (str[i])
	{
		count = count + write(1, &str[i], 1);
		i++;
	}
	return (count);
}
#include <stdio.h>

int	main(void)
{
	int	ret1;
	int	ret2;

	ret1 = ft_printf("String test: %s\n", "Emrullah");
	ret2 = printf("String test: %s\n", "Emrullah");
	printf("ft_printf return: %d\n", ret1);
	printf("printf return: %d\n\n", ret2);
}
