/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:49:20 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 13:19:11 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	g_size;

void	ft_error(void)
{
	write(1, "ERROR\n", 6);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
			tab[x][y] = '1';
	}
}
