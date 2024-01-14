#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac-- > 9)
		write(1, &"0123456789"[ac / 10], 1);
	write(1, &"0123456789"[ac % 10], 1);
	return ((void)av, write(1, "\n", 1), 0);
}
