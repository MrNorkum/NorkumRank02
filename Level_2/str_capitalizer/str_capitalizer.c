#include <unistd.h>

int	is_word_final(char c)
{
	return (!c || c == ' ' || c == '\t');
}

int	is_low(char c)
{
	return ('a' <= c && c <= 'z');
}

int	is_up(char c)
{
	return ('A' <= c && c <= 'Z');
}

void	str_capitalizer(char *str)
{
	while (*str)
	{
		while (*str && is_word_final(*str))
			write(1, str++, 1);
		if (*str)
		{
			if (is_low(*str))
				*str -= 32;
			write(1, str++, 1);
		}
		while (!is_word_final(*str))
		{
			if (is_up(*str))
				*str += 32;
			write(1, str++, 1);
		}
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		for (int i = 1; i < ac; i++)
			str_capitalizer(av[i]);
	}
	return (write(1, "\n", (ac == 1)), 0);
}
