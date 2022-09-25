/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:20:55 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 14:13:02 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (str[i] < 97 || str[i] > 122)
			break ;
	}
	if (len == i)
		return (1);
	return (0);
}
