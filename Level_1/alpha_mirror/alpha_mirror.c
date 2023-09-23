#include <unistd.h>

int	main(int ac, char **av)
{
	for (; ac == 2 && *av[1]; av[1]++)
	{
		if ('a' <= *av[1] && *av[1] <= 'z')
			*av[1] = 219 - *av[1];
		else if ('A' <= *av[1] && *av[1] <= 'Z')
			*av[1] = 155 - *av[1];
		write(1, av[1], 1);
	}
	write(1, "\n", 1);
}
