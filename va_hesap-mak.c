/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_hesap-mak.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:03:20 by etasci            #+#    #+#             */
/*   Updated: 2026/02/18 22:28:18 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int toplam(int sayi,...)
{
	va_list emru;
	int i;


	va_start(emru, sayi);
	int number;
	int number2;
	int number3;
	number = va_arg(emru, int);
	number2 = va_arg(emru, int);
	number3 = va_arg(emru,int);
	while(sayi[i] == '%')
	{
		if(sayi[i] == 'd' )
	}



	va_end(sayi[i]);
}

#include<stdio.h>
int main()
{
	printf("%d",toplam(3, 12,15,13));



}
