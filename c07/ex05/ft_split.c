/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:42:29 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/27 20:10:35 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_seplen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_sep(str + i, charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	word;

	word = 0;
	while (*str)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		i = ft_seplen(str, charset);
		str += i;
		if (i)
			word ++;
	}
	return (word);
}

char	*ft_strdup(char *src, int w)
{
	char	*dest;

	dest = malloc((w + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[w] = '\0';
	while (w--)
		dest[w] = src[w];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		w;
	int		len;

	if (!str || !charset)
		return (NULL);
	len = ft_wordcount(str, charset);
	arr = malloc((len + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		w = ft_seplen(str, charset);
		arr[i] = ft_strdup(str, w);
		if (!arr[i])
			return (NULL);
		str += w;
	}
	arr[len] = 0;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**split;
	char	str[50] = "Salut0les copains";
	char	charset[10] = "0 ";
	int		i = -1;

	split = ft_split(str, charset);
	while (++i < ft_wordcount(str, charset) + 1)
		printf("[%s]\n", split[i]);
	free(split);
	return (0);
}*/
