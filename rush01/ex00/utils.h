/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:14:29 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:36:28 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

char	g_size = 4;

int	ft_check(int ac, char **av);
int	ft_checkformat(char *str);

int	ft_checkdup(char **tab);
int	ft_checkcolup(char **hint, char **tab);
int	ft_checkcoldown(char **hint, char **tab);
int	ft_checkrowup(char **hint, char **tab);
int	ft_checkrowdown(char **hint, char **tab);

char	*ft_strmal(

#endif
