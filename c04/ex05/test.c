int	ft_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_strlen_atoi(char *str)
{
	int i;

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
	int i;
	int nbr;
	int len;
	int n;

	if ((len = ft_strlen_atoi(base)) < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	n = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			n = 1 - n;
	nbr = 0;
	while ((i = ft_base(*str, base)) >= 0)
	{
		nbr = nbr * len + i;
		str++;
	}
	if (n)
		nbr *= -1;
	return (nbr);
}

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("42", "0123456789abcdef"));
	return (0);
}
