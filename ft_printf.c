/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:10:34 by etasci            #+#    #+#             */
/*   Updated: 2026/02/24 17:11:20 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
#include<unistd.h>
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	i = 0;
	int count;
	count = 0;
	va_start (args,str);

	while(str[i])
	{
		 if(str[i] == '%' && str[i + 1])
		 {
			i++;
			if(str[i] == 'c')
			count += ft_print_char(args);
		}
		else 
		{
			count += write(1,&str[i],1);
		}
		i++;
	}
	va_end(args);
	return(count);
}
#include<stdio.h>
int main()
{
int ret1 = ft_printf("Hello %c\n", 'A');
int ret2 = printf("Hello %c\n", 'A');

printf("ft_printf return: %d\n", ret1);
printf("printf return: %d\n", ret2);
}