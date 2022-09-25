/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:07:08 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 14:10:53 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			break ;
	}
	if (i == len)
		return (1);
	return (0);
}
