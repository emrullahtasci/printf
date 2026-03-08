/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:39:45 by emrullah          #+#    #+#             */
/*   Updated: 2026/03/07 17:17:54 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_putptr(void *ptr)
{
    unsigned long x;
    int count;

    if(!ptr)
        return(write(1, "(nil)" ,5));
    else 
    {
        x = (unsigned long)ptr;
        count = 0;
        count += write(1,"0x",2);
        count += ft_puthex_low(x);
    }
    return (count);
}
