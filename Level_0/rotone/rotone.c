#include <unistd.h>

int main(int ac, char **av)
{
	for (; ac == 2 && *av[1]; av[1]++)
	{
		if (('a' <= *av[1] && *av[1] <= 'y') || ('A' <= *av[1] && *av[1] <= 'Y'))
			*av[1] += 1;
		else if (*av[1] == 'z' || *av[1] == 'Z')
			*av[1] -= 25;
		write(1, av[1], 1);
	}
	write(1, "\n", 1);	
}