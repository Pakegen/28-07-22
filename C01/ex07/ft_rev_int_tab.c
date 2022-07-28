/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:22:18 by qallain           #+#    #+#             */
/*   Updated: 2022/07/22 13:14:09 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	place;
	int	i;

	place = 0;
	i = 0;
	while (place < (size / 2))
	{
		i = tab[place];
		tab[place] = tab[size - 1 - place];
		tab[size - 1 - place] = i;
		place++;
	}
}
