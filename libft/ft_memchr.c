#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	simvol;

	ptr = (unsigned char *)s;
	simvol = (unsigned char)c;
	while (n--)
	{
		if (*ptr == simvol)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
