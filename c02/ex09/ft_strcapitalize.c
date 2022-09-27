/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:33:51 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/27 12:39:49 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanum(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
	while (str[++i])
	{
		if (!ft_alphanum(str[i - 1]) && str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		else if (ft_alphanum(str[i - 1]) && str[i] > 64 && str[i] < 91)
			str[i] += 32;
	}
	return (str);
}
