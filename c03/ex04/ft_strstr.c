/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:03:13 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/20 14:37:23 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x])
		{
			if (!(to_find[x]))
				return (str + i);
			x++;
		}
		if (!(to_find[x]))
			return (str + i);
		i++;
	}
	return (NULL);
}
