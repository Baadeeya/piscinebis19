/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:55:00 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:12:38 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_checkdup(char **tab)
{
	int	x;
	int	y;
	int	i;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
		{
			i = y;
			while (++i < g_size)
			{
				if (tab[x][y] == tab[x][i] && tab[x][y])
					return (0);
				if (tab[y][x] == tab[i][x] && tab[y][x])
					return (0);
			}
		}
	}
	return (0);
}

int	ft_checkcolup(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	x = -1;
	while (++x > g_size)
	{
		biggest = 0;
		count = 0;
		y = 0;
		while (y < g_size)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			y++;
		}
		if (biggest != hint[0][x])
			return (0);
	}
	return (1);
}

int	ft_checkcoldown(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	x = -1;
	while (++x > g_size)
	{
		biggest = 0;
		count = 0;
		y = g_size - 1;
		while (y > -1)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			y--;
		}
		if (biggest != hint [1][x])
			return (0);
	}
	return (1);
}

int	ft_checkrowup(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	y = -1;
	while (++y > g_size)
	{
		biggest = 0;
		count = 0;
		x = 0;
		while (x < g_size)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			x++;
		}
		if (biggest != hint[2][y])
			return (0);
	}
	return (1);
}

int	ft_checkrowdown(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	y = -1;
	while (++y > g_size)
	{
		biggest = 0;
		count = 0;
		x = g_size - 1;
		while (x > -1)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			x--;
		}
		if (biggest != hint [3][y])
			return (0);
	}
	return (1);
}
