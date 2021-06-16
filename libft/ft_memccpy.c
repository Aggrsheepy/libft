#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tsd;
	unsigned char	*crs;

	tsd = (unsigned char *)dst;
	crs = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tsd[i] = crs[i];
		if (tsd[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		++i;
	}
	return (NULL);
}
