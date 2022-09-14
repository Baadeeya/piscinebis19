/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:33:42 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/14 18:17:57 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(int x, char *base)
{
	if (x > 15)
	{
		ft_puthex(x / 16, base);
		x %= 16;
	}
	write (1, &base[x], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32)
		{
			write(1, "\\0", 2);
			ft_puthex(str[i], "0123456789abcdef");
		}
		else
			write(1, &str[i], 1);
	}
}
