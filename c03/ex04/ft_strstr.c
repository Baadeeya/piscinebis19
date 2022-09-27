/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:03:13 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/27 14:12:17 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	x;

	if (!to_find)
		return (str);
	if (!str)
		return (0);
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
	return (0);
}
