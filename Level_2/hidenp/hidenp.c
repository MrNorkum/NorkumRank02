#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		while (*av[2])
		{
			if (*av[1] == *av[2])
				av[1]++;
			av[2]++;
		}
		if (*av[1] == '\0')
			return (write(1, "1\n", 2), 0);
		return (write(1, "0\n", 2), 0);
	}
	return ((1, "\n", 1), 0);
}
