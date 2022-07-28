/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:47:10 by qallain           #+#    #+#             */
/*   Updated: 2022/07/28 13:10:16 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	while (b != 0)
	{
		a = 0;
		b = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				c = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = c;
				b++;
			}
			a++;
		}
	}
}
