#include <unistd.h>

void	putnbr(int n)
{
	if (n > 10)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int ac, char **av)
{
	return ((void)av, putnbr(ac), write(1, "\n", 1), 0);
}
