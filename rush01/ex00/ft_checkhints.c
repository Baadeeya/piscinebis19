/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkhints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:19:51 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 14:00:47 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_check(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (ft_error());
	if (ft_strlen(av[1] != (g_size * 8) - 1))
		return (ft_error());
}

int	ft_checkformat(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= '1' && str[i] <= g_size && str[i + 1] == ' '))
			return (ft_error());
		i++;
	}
	return (1);
}

int	checkvalue(char *str)
{
	int	
}
