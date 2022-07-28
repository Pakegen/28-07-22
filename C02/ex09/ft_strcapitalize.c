/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:02:44 by qallain           #+#    #+#             */
/*   Updated: 2022/07/23 14:03:55 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9' ))
		return (1);
	return (0);
}

int	maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	mot;

	i = 0;
	mot = 0;
	while (str[i])
	{
		if ((min(str[i])) && (mot == 0))
			str[i] = str[i] - 32;
		else if ((maj(str[i])) && (mot == 1))
			str[i] = str[i] + 32;
		if (!(alpha(str[i])))
			mot = 0;
		else
			mot = 1;
		i++;
	}
	return (str);
}
