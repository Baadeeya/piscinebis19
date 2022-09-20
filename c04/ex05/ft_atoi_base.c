/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:42:42 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/20 19:49:02 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_strlen_atoi(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '+' || str[i] == '-'
			|| str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)
			|| ft_base(str[i], str + i + 1) >= 0)
			return (0);
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;
	int	len;
	int	n;

	len = ft_strlen_atoi(base);
	if (len < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	n = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			n = 1 - n;
	nbr = 0;
	i = ft_base(*str, base);
	while (i > -1)
	{
		nbr = nbr * len + i;
		str++;
		i = ft_base(*str, base);
	}
	if (n)
		nbr *= -1;
	return (nbr);
}
