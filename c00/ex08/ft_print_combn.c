/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:33:45 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/13 19:06:13 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void ft_display(int n, int *tab, int x)
{
	int	i;

	i = 0;
	if (x)
		ft_putstr(", ");
	while (i < n)
		ft_putchar(tab[i++] + '0');
}

void	ft_incr(int n, int *tab)
{
	int	i;
	int	len;

	i = n - 1;
	len = 9;
	while (tab[i] == len)
	{
		i--;
		len--;
	}
	tab[i]++;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[n];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_display(n, tab, 0);
	while (tab[0] != 10 - n || tab[n-1] != 9)
	{
		if (tab[n - 1] != 9)
			tab[n - 1] += 1;
		else
			ft_incr(n, tab);
		ft_display(n, tab, 1);
	}
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
