#include <unistd.h>

int isalpha(char c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	main(int ac, char **av)
{
	if (ac == 4 && isalpha(av[2][0]) && !av[2][1] && isalpha(av[3][0]) && !av[3][1])
	{
        	for (int i = 0; av[1][i]; i++)
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
