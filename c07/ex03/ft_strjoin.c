/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:07:01 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/21 15:22:08 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tablen(int size, char **strs, char *sep)
{
	int	x;
	int	y;
	int	len;

	x = -1;
	len = 0;
	while (sep[len])
		len++;
	len *= size - 1;
	x = -1;
	while (++x < size)
	{
		y = -1;
		while (strs[x][++y])
			len++;
	}
	if (len <= 0)
		return (0);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		x;
	int		y;
	int		s;
	int		i;

	str = malloc(sizeof(char) * ft_tablen(size, strs, sep));
	if (!str)
		return (NULL);
	if (!size)
		return (NULL);
	x = -1;
	s = -1;
	i = 0;
	while (++x < size)
	{
		y = -1;
		s = -1;
		while (strs[x][++y])
			str[i++] = strs[x][y];
		while (sep[++s] && x < size - 1)
		{
			str[i] = sep[s];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac - 1, av + 1, "BITE"));
	return (0);
}
