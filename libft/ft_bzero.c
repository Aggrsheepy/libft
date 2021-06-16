#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ns;

	ns = (unsigned char *)s;
	while (n--)
		*ns++ = '\0';
}
