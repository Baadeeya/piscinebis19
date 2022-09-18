/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:49:20 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:59:38 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// Ecris "Error" avec retour a la ligne et renvoie zero.

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

// Ouais bon vous voyez ca normalement vous etes trop bg

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
