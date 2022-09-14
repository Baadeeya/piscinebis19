/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:01:37 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/14 19:02:31 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = -1;
	while (dest[i])
		i++;
	while (src[++x] && x < nb)
		dest[i++] = src[x];
	dest[i] = '\0';
	return (dest);
}
