/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:27:27 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 13:31:21 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("[%d]\n", strcmp(NULL, "lol"));
	return (0);
}
