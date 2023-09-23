#include "ft_list.h"

int	swap_list(t_list *a, t_list *b)
{
	int swap = a->data;
	a->data = b->data;
	b->data = swap;
	return (1);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int is_swap = 1;

	while (is_swap)
	{
		is_swap = 0;
		tmp = lst;
		while (tmp && tmp->next)
		{
			if (!cmp(tmp->data, tmp->next->data))
				is_swap = swap_list(tmp, tmp->next);
			tmp = tmp->next;
		}
	}
	return (lst);
}