/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 02:35:02 by qallain           #+#    #+#             */
/*   Updated: 2022/07/25 02:35:19 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_posi_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		if (base[i] >= 9 && base[i] <= 13)
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			n *= (-1);
		i++;
	}
	return (i * n);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		nb;
	long	f;
	int		n;

	f = 0;
	n = ft_check_base(base);
	if (n == 1)
		return (0);
	nb = 1;
	i = ft_atoi(str);
	if (i < 0)
	{
		nb = -1;
		i = -i;
	}
	while (str[i])
	{
		if (ft_posi_base(str[i], base) == -1)
			return (f * nb);
		f = f * n + ft_posi_base(str[i], base);
		i++;
	}
	return (f * nb);
}
