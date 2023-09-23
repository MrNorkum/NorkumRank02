#include <unistd.h>

int check(int c, char *str, int idx)
{
	for (int i = 0; i < idx; i++)
		if (str[i] == c)
			return (0);
	return (1);
}

int main(int ac, char **av)
{	
	int i = -1;
	int j = -1;
	int k = 0;
	
	if (ac == 3)
	{
		while(av[1][++i])
		while(av[2][++j])
			av[1][i++] = av[2][j];
		i--;
		while(k <= i)
		{
			if(check(av[1][k], av[1], k)) 
				write (1, &av[1][k], 1); 
			k++;
		}
	}
	write (1, "\n", 1);
}
