#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	simvol;

	ptr = (char *)(s + ft_strlen(s));
	simvol = (char)c;
	while (ptr >= s)
	{
		if (*ptr == simvol)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
