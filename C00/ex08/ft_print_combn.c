/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:47:38 by qallain           #+#    #+#             */
/*   Updated: 2022/07/19 13:13:09 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}
void	ft_print_combn(int n)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;
	int	h;
	int	i;

	i = '0';
	if (n == 0)
	{
		return ('0');
	}
	if (n  = 1)
	{
		while (i <= 9)
		{
			ft_putchar(i);
			i++
				if (i != '9')
				{
					ft_putchar(",");
					ft_putchar(" ");
				}
		}
	}
	if (n = 2)
	{
		while (i <= 9 && h <= 9)
		{
			ft_putchar(h);
			ft_putchar(i);
			i++;
			h++;
			if (i != '9' && h != '9')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	if (n = 3)
	{
		while (i <= 9 && h <= 9 && g <= 9)
		{
			ft_putchar()
		}
	}
}
