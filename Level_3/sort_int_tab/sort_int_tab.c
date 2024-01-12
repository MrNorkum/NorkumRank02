int	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return (1);
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int is_swap = 1;

	while (is_swap)
	{
		i = -1;
		is_swap = 0;
		while (++i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				is_swap = ft_swap(&tab[i], &tab[i + 1]);
		}
	}
}
