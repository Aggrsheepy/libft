#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*r1;
	unsigned char	*r2;

	r1 = (unsigned char *)dst;
	r2 = (unsigned char *)src;
	if (!len || dst == src)
		return (dst);
	while (len--)
		*r1++ = *r2++;
	return (dst);
}
