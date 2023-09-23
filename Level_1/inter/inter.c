#include <unistd.h>

int	main(int ac, char **av)
{
	int k;
	if (ac == 3)
	{
		char *s1 = av[1], *s2 = av[2];
		for (int i = 0; s1[i]; i++)
		{
			for (int j = 0; s2[j]; j++)
			{
				if(s1[i] == s2[j])
				{ 
					k = 0;
					while (s1[k] != s1[i])
						k++;
					if (k == i)
					{
						k = 0;
						while (s2[k] != s2[j])
							k++;
						if (k == j)
							write(1, &s1[i], 1);
					}
				}
			}
		}
	}
	write(1, "\n", 1);
}