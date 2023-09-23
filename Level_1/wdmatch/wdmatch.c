#include <unistd.h>

int	main(int ac, char const *av[])
{
	int i = 0;

	if (ac == 3)
	{
		for (int j = 0; av[2][j]; j++)
			if (av[2][j] == av[1][i])
				i++;
		if (!av[1][i])
			while (*av[1] && write(1, av[1]++, 1));
	}
	write(1, "\n", 1);
}