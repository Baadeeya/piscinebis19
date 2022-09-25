/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:10:51 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/25 15:59:30 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_strlen_base(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| ft_base(base[i], base + i + 1) >= 0)
			return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base, int len)
{
	int	i;
	int	nbr;
	int	neg;

	len = ft_strlen_base(base);
	if (len < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	neg = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = 1 - neg;
	nbr = 0;
	i = ft_base(*str++, base);
	while (i >= 0)
	{
		nbr = nbr * len + i;
		i = ft_base(*str++, base);
	}
	if (neg)
		nbr *= -1;
	return (nbr);
}

int	ft_nbrlen(unsigned int nb, unsigned int baselen)
{
	if (nb < baselen)
		return (1);
	return (1 + ft_nbrlen(nb / baselen, baselen));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	if (!base_from || !base_to || !nbr)
		return (NULL);
	n = ft_strlen_base(base_from);
	size = ft_strlen_base(base_to);
	if (!(n && size))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = n;
	if (n < 0)
		nb = -n ;
	i = ft_nbrlen(nb, size);
	if (n < 0)
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	printf("[%s]\n", ft_convert_base("", "0123456789", "0123456789abcdef"));
	return (0);
}
