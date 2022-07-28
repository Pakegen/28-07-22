/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:06:35 by qallain           #+#    #+#             */
/*   Updated: 2022/07/28 16:06:55 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	calc;

	i = 0;
	calc = max - min;
	dest = malloc (sizeof(int) * calc);
	if (min >= max)
		return (0);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min = min + 1;
	}
	return (dest);
}
