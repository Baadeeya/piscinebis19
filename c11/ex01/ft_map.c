/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:17:55 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/28 18:22:03 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	arr;

	len = malloc(length * sizeof(int));
	if (!arr || length < 1)
		return (NULL);
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}
