/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:45:45 by qallain           #+#    #+#             */
/*   Updated: 2022/07/26 14:38:01 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		k = 0;
		while (str[i++] == to_find[k++])
		{
			if (to_find[k] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
