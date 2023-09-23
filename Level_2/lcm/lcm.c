unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (!a || !b)
		return (0);
	n = (a > b) * a + !(a > b) * b;
	while (1)
	{
		if (!(n % a) && !(n % b))
			return (n);
		n++;
	}
}