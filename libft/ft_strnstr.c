#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (!lit[i])
		return ((char *)big);
	while (big[i])
	{
		k = 0;
		while (big[i + k] == lit[k] && lit[k] && i + k < len)
			k++;
		if (!lit[k])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
