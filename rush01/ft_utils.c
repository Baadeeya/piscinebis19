/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:49:20 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 15:21:23 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	g_size;

int	ft_error(void)
{
	write(1, "ERROR\n", 6);
	return (0);
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

/*
** Alloue de la memoire au tableau (string par string egalement avec ft_strmal ci-dessus)
*/

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

/*
** Remplis le tableau vide (deja malloc) de 0 (ou de 1 jsp encore)
*/

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

/*
** ft_strtotab transforme l'input string d'argument en un tableau qui les stocke
** 
** nb pour David : envoyer int i a 0 d'office
*/

char	**ft_strtotab(char *str, int i;)
{
	int	x;
	int	y;
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
			i =y;
			while (++i < g_size)
			{
				if (
			}
		}
	}
}
