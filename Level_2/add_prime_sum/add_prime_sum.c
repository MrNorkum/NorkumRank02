

#include <unistd.h>

int		ft_atoi(char *s, int res)
{
	if ('0' <= *s && *s <= '9')
		return (ft_atoi(s + 1, res * 10 + *s - '0'));
	return (res);
}

int	is_prime(int n)
{
	if (n <= 1)
		return (0);
	for (int i = 2; i <= 46340 && i * i <= n; i++)
		if (!(n % i))
			return (0);
	return (1);
}

int		add_prime_sum(int n)
{
	int sum = 0;
	for (int i = 2; i <= n; i++)
		if (is_prime(i) == 1)
			sum += i;
	return (sum);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(add_prime_sum(ft_atoi(av[1], 0)));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}