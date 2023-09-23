#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	if (n <= 1)
		return (0);
	for (int i = 2; i <= 46340 && i * i <= n; i++)
		if (!(n % i))
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int n, f = 2;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		while (f <= n)
		{
			if (!(n % f) && is_prime(f))
			{
				printf("%d", f);
				n /= f;
				if (!(n == 1))
				    printf("*");
			}
			else
				f++;
		}
	}
	return (printf("\n") - 1);
}
