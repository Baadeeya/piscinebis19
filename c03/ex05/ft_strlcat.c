/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:36:37 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/20 14:56:28 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = -1;
	len = ft_strlen(dst);
	if (size <= len)
		return (ft_strlen(src) + size);
	while (src[++i] && i < size - len - 1)
		dst[len + i] = src[i];
	dst[len + i] = 0;
	return (len + ft_strlen(src));
}
