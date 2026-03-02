/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:43:30 by etasci            #+#    #+#             */
/*   Updated: 2026/02/25 19:51:05 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putunsigned(unsigned int n);
int ft_puthex(unsigned int n, int uppercase);
int ft_putptr(void *ptr);
#endif
