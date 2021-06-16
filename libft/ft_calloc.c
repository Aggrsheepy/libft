#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*nov;

	nov = malloc(size * number);
	if (!(nov))
		return (NULL);
	ft_memset(nov, 0, number * size);
	return (nov);
}
