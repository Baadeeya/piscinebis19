/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:46 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 14:11:57 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	len;

	if (!str || !*str)
		return (0);
	i = -1;
	len = 0;
	while (str[len])
		len++;
	while (str[++i])
	{
		if (str[i] < 48 || str[i] > 57)
			break ;
	}
	if (i == len)
		return (1);
	return (0);
}
