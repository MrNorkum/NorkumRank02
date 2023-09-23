int	is_power_of_2(unsigned int n)
{
	if (!n)
		return (0);
	while (n > 1)
	{
		if (n % 2)
			return (0);
		n /= 2;
	}
	return (1);
}
