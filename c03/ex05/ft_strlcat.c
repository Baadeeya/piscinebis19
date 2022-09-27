/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:36:37 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/27 12:53:30 by dagutin          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = -1;
	len = ft_strlen(dest);
	if (size <= len)
		return (ft_strlen(src) + size);
	while (src[++i] && i < size - len - 1)
		dest[len + i] = src[i];
	dest[len + i] = 0;
	return (len + ft_strlen(src));
}
