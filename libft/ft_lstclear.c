#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*snos;

	if (lst)
	{
		while (*lst)
		{
			snos = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = snos;
		}
	}
}
