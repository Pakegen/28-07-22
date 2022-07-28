/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:57:24 by qallain           #+#    #+#             */
/*   Updated: 2022/07/26 16:44:27 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	diviser;
	long long	nb1;

	nb1 = nb;
	diviser = 1;
	if (nb1 == 0)
		return (ft_putchar('0'));
	if (nb1 < 0)
	{
		nb1 = -nb1;
		ft_putchar('-');
	}
	while (diviser <= nb1)
	{
		diviser = diviser * 10;
	}
	while (diviser >= 10)
	{
		diviser = diviser / 10;
		ft_putchar(nb1 / diviser + '0');
		nb1 = nb1 % diviser;
	}
}
