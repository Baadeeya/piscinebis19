/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:03:56 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/28 13:59:52 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*temp;

	i = -1;
	if (min >= max)
		return (NULL);
	max -= min;
	temp = malloc(max * sizeof(int));
	if (!temp)
		return (NULL);
	while (++i < max)
		temp[i] = min + i;
	return (temp);
}
