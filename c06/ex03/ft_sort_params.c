/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:09:08 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/27 19:34:41 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_display(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (!*s1)
		return (0);
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int		i;
	int		x;
	char	*tmp;

	if (av)
		return (0);
	i = 1;
	x = 1;
	while (i < ac)
	{
		x = 1;
		while (x < ac - 1)
		{
			if (ft_strcmp(av[x], av[x + 1]) > 0)
			{
				tmp = av[x];
				av[x] = av[x + 1];
				av[x + 1] = tmp;
			}
			x++;
		}
		i++;
	}
	ft_display(ac, av);
	return (0);
}
