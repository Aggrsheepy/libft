#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	size_t	len;
	char	*res;

	len = ft_strlen(s);
	res = malloc (sizeof(char) + (len));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
