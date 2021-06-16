#include "libft.h"

int	len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	l;
	int		i;

	res = (char *)malloc(sizeof(char) *((i = len(l = n)) + 1));
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (l == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (l < 0)
	{
		res[0] = '-';
		l = -1 * l;
	}
	while (l > 0)
	{
		res[i] = 48 + (l % 10);
		l = l / 10;
		i--;
	}
	return (res);
}
