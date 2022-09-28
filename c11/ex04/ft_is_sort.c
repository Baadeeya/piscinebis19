/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:09:50 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/28 19:27:50 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ascending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	return (1);
}

int	ft_descending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_ascending(tab, length, f) || ft_descending(tab, length, f))
		return (1);
	return (0);
}
