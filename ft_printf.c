/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:10:34 by etasci            #+#    #+#             */
/*   Updated: 2026/02/18 22:01:28 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *str, ...)
{
	va_list	atr;
	int	i;
	int count;
	va_start (atr,str);

	while(str[i])
	{
		 if(str[i] == %)
		 {
			i++;
			if(str[i] == 'c')
			count += ft_print_char(va_args );


		 }
	}











	va_end(args);




}
