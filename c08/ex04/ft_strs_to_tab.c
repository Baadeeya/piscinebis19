/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:01:03 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/28 18:03:15 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_free(char *str)
{
	free(str);
	return (NULL);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (ft_free(dest));
	i = -1;
	while (str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (!av)
		return (NULL);
	i = -1;
	if (ac < 0)
		ac = 0;
	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return ((struct s_stock_str *)(ft_free(tab[i].copy)));
	}
	tab[i].str = 0;
	return (tab);
}
