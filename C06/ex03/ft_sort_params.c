/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 03:18:16 by qallain           #+#    #+#             */
/*   Updated: 2022/07/27 17:56:56 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int i, int b, char **argv)
{
	int		valeur_retour;
	char	*swap;

	while (argv[i])
	{
		while (argv[b])
		{
			valeur_retour = ft_strcmp(argv[i], argv[b]);
			if (valeur_retour > 0)
			{
				swap = argv[i];
				argv[i] = argv[b];
				argv[b] = swap;
			}
			b++;
		}
		i++;
		b = i + 1;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	backslash;

	(void) argc;
	i = 1;
	backslash = '\n';
	ft_sort_params(1, (i + 1), argv);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, &backslash, 1);
		i++;
	}
}
