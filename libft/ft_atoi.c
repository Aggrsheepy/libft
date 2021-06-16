#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	nom;
	int				i;
	int				k;

	k = 1;
	i = 0;
	nom = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			k = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nom = nom * 10 + (str[i] - '0');
		i++;
	}
	if (nom > 2147483647 && k == 1)
		return (-1);
	if (nom > 2147483648 && k == -1)
		return (0);
	return ((int)(k * nom));
}
