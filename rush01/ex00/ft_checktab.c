/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:55:00 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 16:35:24 by dagutin          ###   ########.fr       */
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

int	ft_checkhint(char **hint, char **tab)
{

}
