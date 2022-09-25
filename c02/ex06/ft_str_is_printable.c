/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:26:34 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 16:33:23 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	len;

	if (!str)
		return (1);
	i = -1;
	len = 0;
	while (str[len])
		len++;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] > 126)
			break ;
	}
	if (len == i)
		return (1);
	return (0);
}
