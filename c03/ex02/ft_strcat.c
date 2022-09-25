/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:47:03 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 19:18:49 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	x;

	if (!dest || !src)
		return (dest);
	i = 0;
	x = -1;
	while (dest[i])
		i++;
	while (src[++x])
		dest[i++] = src[x];
	dest[i] = '\0';
	return (dest);
}
