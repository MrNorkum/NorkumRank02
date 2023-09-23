int	max(int* tab, unsigned int len)
{
	int res;

	if (!len)
		return (0);
	res = tab[0];
	for (unsigned int i = 0; i < len; i += 1)
		if (res < tab[i])
			res = tab[i];
	return (res);
}
