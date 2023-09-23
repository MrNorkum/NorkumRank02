#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = -1;
	if (ac == 2)
	{
		while (av[1][++i]);
		i--;
		while ((av[1][i] == ' ' || av[1][i] == '\t') && i)
			i--;	
		while (av[1][i] != ' ' && av[1][i] != '\t' && i)
			i--;
		if (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}