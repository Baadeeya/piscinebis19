/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:59 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 10:28:43 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	if (!src || !dest)
		return (0);
	x = 0;
	while (src[x])
		x++;
	if (!(size))
		return (x);
	i = -1;
	while (src[++i] && i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (x);
}
