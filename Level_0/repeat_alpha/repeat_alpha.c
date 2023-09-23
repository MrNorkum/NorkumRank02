#include <unistd.h>

int	main(int ac, char **av)
{
	for (int try; ac == 2 && *av[1]; av[1]++)
	{
		try = 1;
		if ('A' <= *av[1] && *av[1] <= 'Z')
			try = *av[1] - 64;
		if ('a' <= *av[1] && *av[1] <= 'z')
			try = *av[1] - 96;
		while (try--)
			write(1, av[1], 1);
	}
	write(1, "\n", 1);
}