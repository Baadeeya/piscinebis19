/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:23:50 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:24:04 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strmal(int i)
{
	char	*str;

	str = malloc(sizeof(char) * i);
	if (!(str))
		return (NULL);
	return (str);
}

char	*ft_tabmal(int x, int y)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char) * x);
	if (!(str))
		return (NULL);
	i = -1;
	while (++i < x)
	{
		tab[i] = ft_singlemal(y);
		if (!(tab[i]))
			return (NULL);
	}
	return (tab);
}

void	ft_tabfill(char **tab)
{
	int	x;
	int	y;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
			tab[x][y] = 0;
	}
}

char	**ft_strtotab(char *str, int i;)
{
	int		x;
	int		y;
	char	**hint;

	hint = ft_tabmal(g_size - '0', g_size - '0');
	if (!(hints))
		return (NULL);
	x = -1;
	while (str[i] && ++x < g_size)
	{
		y = -1;
		while (str[i] && ++y < g_size)
		{
			if (str[i] == ' ')
				i++;
			hint[x][y] = str[i];
			i++;
		}
		hint[x][y] = '\0';
	}
	hint[x] = NULL;
	return (hint);
}
