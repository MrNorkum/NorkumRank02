#include <stdio.h>
#include <stdlib.h>

int	pgcd(int n, int a, int b)
{
	if (!(a % n) && !(b % n))
		return (printf("%d", n));
	return (pgcd(--n, a, b));
}

int	main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[1]), atoi(av[2]));
	return (printf("\n"), 0);
}
