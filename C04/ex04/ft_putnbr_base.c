/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 02:31:35 by qallain           #+#    #+#             */
/*   Updated: 2022/07/26 16:14:54 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	n;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i] != '\0' && ft_strlen(str) != 1)
	{
		n = 0;
		while (str[n] != '\0')
		{
			if (str[i] > 31)
			{
				if ((str[n] != str[i]) || (str[n] != '+' && str[n] != '-'))
				n++;
				else
					return (0);
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	u;
	unsigned int	len;

	if (check_base(base))
	{
		len = ft_strlen(base);
		if (nbr < 0)
		{
			u = (unsigned int)(nbr * -1);
			ft_putchar('-');
		}
		else
			u = (unsigned int)nbr;
		if (u >= len)
		{
			ft_putnbr_base(u / len, base);
			ft_putnbr_base(u % len, base);
		}
		else
			ft_putchar(base[u % len]);
	}
}
