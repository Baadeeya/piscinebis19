/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:57:28 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/28 19:09:15 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (f*)(char*))
{
	int	i;
	int	x;

	i = -1;
	x = 0;
	while (++i < length)
		if (f(tab[i]))
				x++;
	return (0);
}
