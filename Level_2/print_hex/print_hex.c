#include <unistd.h>

int ft_atoi(char *s, int res)
{
	if ('0' <= *s && *s <= '9')
		return (ft_atoi(s + 1, res * 10 + *s - '0'));
	return (res);
}

void	ft_puthex(int n)
{
	if (n > 16)
		ft_puthex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_puthex(ft_atoi(av[1], 0));
	return (write(1, "\n", 1), 0);
}