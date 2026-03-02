/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:37:02 by emrullah          #+#    #+#             */
/*   Updated: 2026/02/28 16:37:02 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putnbr(int nbr)
{
    long nbr;
    int count;
    count = 0;

    if (nbr < 0)
    {
        count += write(1,"-",1);
        nbr = -nbr;
    }
    if (nbr > 10)
    {
        count += ft_putnbr(nbr / 10);
    }
    count += putchar(nbr % 10 + '0');
    return(count);
}
int main()
{
    

}